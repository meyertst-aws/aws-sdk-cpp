﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{
  enum class TaskMode
  {
    NOT_SET,
    BASIC,
    ENHANCED
  };

namespace TaskModeMapper
{
AWS_DATASYNC_API TaskMode GetTaskModeForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForTaskMode(TaskMode value);
} // namespace TaskModeMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
