﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/client/AWSErrorMarshaller.h>

namespace Aws
{
namespace Client
{

class AWS_CONNECTCAMPAIGNSV2_API ConnectCampaignsV2ErrorMarshaller : public Aws::Client::JsonErrorMarshaller
{
public:
  Aws::Client::AWSError<Aws::Client::CoreErrors> FindErrorByName(const char* exceptionName) const override;
};

} // namespace Client
} // namespace Aws
