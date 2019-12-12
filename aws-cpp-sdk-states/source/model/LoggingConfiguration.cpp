﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/states/model/LoggingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

LoggingConfiguration::LoggingConfiguration() : 
    m_level(LogLevel::NOT_SET),
    m_levelHasBeenSet(false),
    m_includeExecutionData(false),
    m_includeExecutionDataHasBeenSet(false),
    m_destinationsHasBeenSet(false)
{
}

LoggingConfiguration::LoggingConfiguration(JsonView jsonValue) : 
    m_level(LogLevel::NOT_SET),
    m_levelHasBeenSet(false),
    m_includeExecutionData(false),
    m_includeExecutionDataHasBeenSet(false),
    m_destinationsHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingConfiguration& LoggingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("level"))
  {
    m_level = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("level"));

    m_levelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeExecutionData"))
  {
    m_includeExecutionData = jsonValue.GetBool("includeExecutionData");

    m_includeExecutionDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinations"))
  {
    Array<JsonView> destinationsJsonList = jsonValue.GetArray("destinations");
    for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
    {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsObject());
    }
    m_destinationsHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_levelHasBeenSet)
  {
   payload.WithString("level", LogLevelMapper::GetNameForLogLevel(m_level));
  }

  if(m_includeExecutionDataHasBeenSet)
  {
   payload.WithBool("includeExecutionData", m_includeExecutionData);

  }

  if(m_destinationsHasBeenSet)
  {
   Array<JsonValue> destinationsJsonList(m_destinations.size());
   for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
   {
     destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
   }
   payload.WithArray("destinations", std::move(destinationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws