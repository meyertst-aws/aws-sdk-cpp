﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribePortalResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePortalResult::DescribePortalResult() : 
    m_portalAuthMode(AuthMode::NOT_SET),
    m_portalType(PortalType::NOT_SET)
{
}

DescribePortalResult::DescribePortalResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DescribePortalResult()
{
  *this = result;
}

DescribePortalResult& DescribePortalResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("portalId"))
  {
    m_portalId = jsonValue.GetString("portalId");

  }

  if(jsonValue.ValueExists("portalArn"))
  {
    m_portalArn = jsonValue.GetString("portalArn");

  }

  if(jsonValue.ValueExists("portalName"))
  {
    m_portalName = jsonValue.GetString("portalName");

  }

  if(jsonValue.ValueExists("portalDescription"))
  {
    m_portalDescription = jsonValue.GetString("portalDescription");

  }

  if(jsonValue.ValueExists("portalClientId"))
  {
    m_portalClientId = jsonValue.GetString("portalClientId");

  }

  if(jsonValue.ValueExists("portalStartUrl"))
  {
    m_portalStartUrl = jsonValue.GetString("portalStartUrl");

  }

  if(jsonValue.ValueExists("portalContactEmail"))
  {
    m_portalContactEmail = jsonValue.GetString("portalContactEmail");

  }

  if(jsonValue.ValueExists("portalStatus"))
  {
    m_portalStatus = jsonValue.GetObject("portalStatus");

  }

  if(jsonValue.ValueExists("portalCreationDate"))
  {
    m_portalCreationDate = jsonValue.GetDouble("portalCreationDate");

  }

  if(jsonValue.ValueExists("portalLastUpdateDate"))
  {
    m_portalLastUpdateDate = jsonValue.GetDouble("portalLastUpdateDate");

  }

  if(jsonValue.ValueExists("portalLogoImageLocation"))
  {
    m_portalLogoImageLocation = jsonValue.GetObject("portalLogoImageLocation");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("portalAuthMode"))
  {
    m_portalAuthMode = AuthModeMapper::GetAuthModeForName(jsonValue.GetString("portalAuthMode"));

  }

  if(jsonValue.ValueExists("notificationSenderEmail"))
  {
    m_notificationSenderEmail = jsonValue.GetString("notificationSenderEmail");

  }

  if(jsonValue.ValueExists("alarms"))
  {
    m_alarms = jsonValue.GetObject("alarms");

  }

  if(jsonValue.ValueExists("portalType"))
  {
    m_portalType = PortalTypeMapper::GetPortalTypeForName(jsonValue.GetString("portalType"));

  }

  if(jsonValue.ValueExists("portalTypeConfiguration"))
  {
    Aws::Map<Aws::String, JsonView> portalTypeConfigurationJsonMap = jsonValue.GetObject("portalTypeConfiguration").GetAllObjects();
    for(auto& portalTypeConfigurationItem : portalTypeConfigurationJsonMap)
    {
      m_portalTypeConfiguration[portalTypeConfigurationItem.first] = portalTypeConfigurationItem.second.AsObject();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
