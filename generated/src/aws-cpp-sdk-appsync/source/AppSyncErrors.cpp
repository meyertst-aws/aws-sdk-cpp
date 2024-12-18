﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/appsync/AppSyncErrors.h>
#include <aws/appsync/model/BadRequestException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::AppSync;
using namespace Aws::AppSync::Model;

namespace Aws
{
namespace AppSync
{
template<> AWS_APPSYNC_API BadRequestException AppSyncError::GetModeledError()
{
  assert(this->GetErrorType() == AppSyncErrors::BAD_REQUEST);
  return BadRequestException(this->GetJsonPayload().View());
}

namespace AppSyncErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int GRAPH_Q_L_SCHEMA_HASH = HashingUtils::HashString("GraphQLSchemaException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int API_KEY_VALIDITY_OUT_OF_BOUNDS_HASH = HashingUtils::HashString("ApiKeyValidityOutOfBoundsException");
static const int API_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ApiLimitExceededException");
static const int UNAUTHORIZED_HASH = HashingUtils::HashString("UnauthorizedException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int BAD_REQUEST_HASH = HashingUtils::HashString("BadRequestException");
static const int API_KEY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ApiKeyLimitExceededException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::CONFLICT), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::SERVICE_QUOTA_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == GRAPH_Q_L_SCHEMA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::GRAPH_Q_L_SCHEMA), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == API_KEY_VALIDITY_OUT_OF_BOUNDS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::API_KEY_VALIDITY_OUT_OF_BOUNDS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == API_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::API_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == UNAUTHORIZED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::UNAUTHORIZED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::CONCURRENT_MODIFICATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == BAD_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::BAD_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == API_KEY_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(AppSyncErrors::API_KEY_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace AppSyncErrorMapper
} // namespace AppSync
} // namespace Aws
