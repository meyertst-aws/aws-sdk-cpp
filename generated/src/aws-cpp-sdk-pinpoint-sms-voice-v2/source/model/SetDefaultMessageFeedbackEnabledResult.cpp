﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/SetDefaultMessageFeedbackEnabledResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SetDefaultMessageFeedbackEnabledResult::SetDefaultMessageFeedbackEnabledResult() : 
    m_messageFeedbackEnabled(false)
{
}

SetDefaultMessageFeedbackEnabledResult::SetDefaultMessageFeedbackEnabledResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : SetDefaultMessageFeedbackEnabledResult()
{
  *this = result;
}

SetDefaultMessageFeedbackEnabledResult& SetDefaultMessageFeedbackEnabledResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConfigurationSetArn"))
  {
    m_configurationSetArn = jsonValue.GetString("ConfigurationSetArn");

  }

  if(jsonValue.ValueExists("ConfigurationSetName"))
  {
    m_configurationSetName = jsonValue.GetString("ConfigurationSetName");

  }

  if(jsonValue.ValueExists("MessageFeedbackEnabled"))
  {
    m_messageFeedbackEnabled = jsonValue.GetBool("MessageFeedbackEnabled");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
