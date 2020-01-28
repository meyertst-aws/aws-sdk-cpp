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
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/dlm/model/RetentionIntervalUnitValues.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p>Specifies the retention rule for cross-Region snapshot copies.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/CrossRegionCopyRetainRule">AWS
   * API Reference</a></p>
   */
  class AWS_DLM_API CrossRegionCopyRetainRule
  {
  public:
    CrossRegionCopyRetainRule();
    CrossRegionCopyRetainRule(Aws::Utils::Json::JsonView jsonValue);
    CrossRegionCopyRetainRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of time to retain each snapshot. The maximum is 100 years. This is
     * equivalent to 1200 months, 5200 weeks, or 36500 days.</p>
     */
    inline int GetInterval() const{ return m_interval; }

    /**
     * <p>The amount of time to retain each snapshot. The maximum is 100 years. This is
     * equivalent to 1200 months, 5200 weeks, or 36500 days.</p>
     */
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }

    /**
     * <p>The amount of time to retain each snapshot. The maximum is 100 years. This is
     * equivalent to 1200 months, 5200 weeks, or 36500 days.</p>
     */
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }

    /**
     * <p>The amount of time to retain each snapshot. The maximum is 100 years. This is
     * equivalent to 1200 months, 5200 weeks, or 36500 days.</p>
     */
    inline CrossRegionCopyRetainRule& WithInterval(int value) { SetInterval(value); return *this;}


    /**
     * <p>The unit of time for time-based retention.</p>
     */
    inline const RetentionIntervalUnitValues& GetIntervalUnit() const{ return m_intervalUnit; }

    /**
     * <p>The unit of time for time-based retention.</p>
     */
    inline bool IntervalUnitHasBeenSet() const { return m_intervalUnitHasBeenSet; }

    /**
     * <p>The unit of time for time-based retention.</p>
     */
    inline void SetIntervalUnit(const RetentionIntervalUnitValues& value) { m_intervalUnitHasBeenSet = true; m_intervalUnit = value; }

    /**
     * <p>The unit of time for time-based retention.</p>
     */
    inline void SetIntervalUnit(RetentionIntervalUnitValues&& value) { m_intervalUnitHasBeenSet = true; m_intervalUnit = std::move(value); }

    /**
     * <p>The unit of time for time-based retention.</p>
     */
    inline CrossRegionCopyRetainRule& WithIntervalUnit(const RetentionIntervalUnitValues& value) { SetIntervalUnit(value); return *this;}

    /**
     * <p>The unit of time for time-based retention.</p>
     */
    inline CrossRegionCopyRetainRule& WithIntervalUnit(RetentionIntervalUnitValues&& value) { SetIntervalUnit(std::move(value)); return *this;}

  private:

    int m_interval;
    bool m_intervalHasBeenSet;

    RetentionIntervalUnitValues m_intervalUnit;
    bool m_intervalUnitHasBeenSet;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws