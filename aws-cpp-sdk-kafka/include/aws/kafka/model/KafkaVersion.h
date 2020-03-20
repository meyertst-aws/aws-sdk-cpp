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

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/KafkaVersionStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Kafka
{
namespace Model
{

  class AWS_KAFKA_API KafkaVersion
  {
  public:
    KafkaVersion();
    KafkaVersion(Aws::Utils::Json::JsonView jsonValue);
    KafkaVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetVersion() const{ return m_version; }

    
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    
    inline KafkaVersion& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    
    inline KafkaVersion& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    
    inline KafkaVersion& WithVersion(const char* value) { SetVersion(value); return *this;}


    
    inline const KafkaVersionStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const KafkaVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(KafkaVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline KafkaVersion& WithStatus(const KafkaVersionStatus& value) { SetStatus(value); return *this;}

    
    inline KafkaVersion& WithStatus(KafkaVersionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_version;
    bool m_versionHasBeenSet;

    KafkaVersionStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws