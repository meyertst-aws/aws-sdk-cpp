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
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/HeaderMatchMethod.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object representing the HTTP header in the request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HttpRouteHeader">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API HttpRouteHeader
  {
  public:
    HttpRouteHeader();
    HttpRouteHeader(Aws::Utils::Json::JsonView jsonValue);
    HttpRouteHeader& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify <code>True</code> to match the opposite of the
     * <code>HeaderMatchMethod</code> method and value. The default value is
     * <code>False</code>.</p>
     */
    inline bool GetInvert() const{ return m_invert; }

    /**
     * <p>Specify <code>True</code> to match the opposite of the
     * <code>HeaderMatchMethod</code> method and value. The default value is
     * <code>False</code>.</p>
     */
    inline bool InvertHasBeenSet() const { return m_invertHasBeenSet; }

    /**
     * <p>Specify <code>True</code> to match the opposite of the
     * <code>HeaderMatchMethod</code> method and value. The default value is
     * <code>False</code>.</p>
     */
    inline void SetInvert(bool value) { m_invertHasBeenSet = true; m_invert = value; }

    /**
     * <p>Specify <code>True</code> to match the opposite of the
     * <code>HeaderMatchMethod</code> method and value. The default value is
     * <code>False</code>.</p>
     */
    inline HttpRouteHeader& WithInvert(bool value) { SetInvert(value); return *this;}


    /**
     * <p>The <code>HeaderMatchMethod</code> object.</p>
     */
    inline const HeaderMatchMethod& GetMatch() const{ return m_match; }

    /**
     * <p>The <code>HeaderMatchMethod</code> object.</p>
     */
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }

    /**
     * <p>The <code>HeaderMatchMethod</code> object.</p>
     */
    inline void SetMatch(const HeaderMatchMethod& value) { m_matchHasBeenSet = true; m_match = value; }

    /**
     * <p>The <code>HeaderMatchMethod</code> object.</p>
     */
    inline void SetMatch(HeaderMatchMethod&& value) { m_matchHasBeenSet = true; m_match = std::move(value); }

    /**
     * <p>The <code>HeaderMatchMethod</code> object.</p>
     */
    inline HttpRouteHeader& WithMatch(const HeaderMatchMethod& value) { SetMatch(value); return *this;}

    /**
     * <p>The <code>HeaderMatchMethod</code> object.</p>
     */
    inline HttpRouteHeader& WithMatch(HeaderMatchMethod&& value) { SetMatch(std::move(value)); return *this;}


    /**
     * <p>A name for the HTTP header in the client request that will be matched on.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the HTTP header in the client request that will be matched on.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the HTTP header in the client request that will be matched on.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the HTTP header in the client request that will be matched on.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the HTTP header in the client request that will be matched on.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the HTTP header in the client request that will be matched on.</p>
     */
    inline HttpRouteHeader& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the HTTP header in the client request that will be matched on.</p>
     */
    inline HttpRouteHeader& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the HTTP header in the client request that will be matched on.</p>
     */
    inline HttpRouteHeader& WithName(const char* value) { SetName(value); return *this;}

  private:

    bool m_invert;
    bool m_invertHasBeenSet;

    HeaderMatchMethod m_match;
    bool m_matchHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws