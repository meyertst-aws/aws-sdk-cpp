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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsCloudFrontDistributionOriginItem.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A complex type that contains information about origins and origin groups for
   * this distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFrontDistributionOrigins">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsCloudFrontDistributionOrigins
  {
  public:
    AwsCloudFrontDistributionOrigins();
    AwsCloudFrontDistributionOrigins(Aws::Utils::Json::JsonView jsonValue);
    AwsCloudFrontDistributionOrigins& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A complex type that contains origins or origin groups for this
     * distribution.</p>
     */
    inline const Aws::Vector<AwsCloudFrontDistributionOriginItem>& GetItems() const{ return m_items; }

    /**
     * <p>A complex type that contains origins or origin groups for this
     * distribution.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>A complex type that contains origins or origin groups for this
     * distribution.</p>
     */
    inline void SetItems(const Aws::Vector<AwsCloudFrontDistributionOriginItem>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>A complex type that contains origins or origin groups for this
     * distribution.</p>
     */
    inline void SetItems(Aws::Vector<AwsCloudFrontDistributionOriginItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>A complex type that contains origins or origin groups for this
     * distribution.</p>
     */
    inline AwsCloudFrontDistributionOrigins& WithItems(const Aws::Vector<AwsCloudFrontDistributionOriginItem>& value) { SetItems(value); return *this;}

    /**
     * <p>A complex type that contains origins or origin groups for this
     * distribution.</p>
     */
    inline AwsCloudFrontDistributionOrigins& WithItems(Aws::Vector<AwsCloudFrontDistributionOriginItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains origins or origin groups for this
     * distribution.</p>
     */
    inline AwsCloudFrontDistributionOrigins& AddItems(const AwsCloudFrontDistributionOriginItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>A complex type that contains origins or origin groups for this
     * distribution.</p>
     */
    inline AwsCloudFrontDistributionOrigins& AddItems(AwsCloudFrontDistributionOriginItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AwsCloudFrontDistributionOriginItem> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws