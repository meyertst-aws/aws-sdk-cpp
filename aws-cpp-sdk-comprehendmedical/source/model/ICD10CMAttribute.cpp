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

#include <aws/comprehendmedical/model/ICD10CMAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComprehendMedical
{
namespace Model
{

ICD10CMAttribute::ICD10CMAttribute() : 
    m_type(ICD10CMAttributeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false),
    m_relationshipScore(0.0),
    m_relationshipScoreHasBeenSet(false),
    m_id(0),
    m_idHasBeenSet(false),
    m_beginOffset(0),
    m_beginOffsetHasBeenSet(false),
    m_endOffset(0),
    m_endOffsetHasBeenSet(false),
    m_textHasBeenSet(false),
    m_traitsHasBeenSet(false)
{
}

ICD10CMAttribute::ICD10CMAttribute(JsonView jsonValue) : 
    m_type(ICD10CMAttributeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false),
    m_relationshipScore(0.0),
    m_relationshipScoreHasBeenSet(false),
    m_id(0),
    m_idHasBeenSet(false),
    m_beginOffset(0),
    m_beginOffsetHasBeenSet(false),
    m_endOffset(0),
    m_endOffsetHasBeenSet(false),
    m_textHasBeenSet(false),
    m_traitsHasBeenSet(false)
{
  *this = jsonValue;
}

ICD10CMAttribute& ICD10CMAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ICD10CMAttributeTypeMapper::GetICD10CMAttributeTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetDouble("Score");

    m_scoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelationshipScore"))
  {
    m_relationshipScore = jsonValue.GetDouble("RelationshipScore");

    m_relationshipScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetInteger("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BeginOffset"))
  {
    m_beginOffset = jsonValue.GetInteger("BeginOffset");

    m_beginOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndOffset"))
  {
    m_endOffset = jsonValue.GetInteger("EndOffset");

    m_endOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Traits"))
  {
    Array<JsonView> traitsJsonList = jsonValue.GetArray("Traits");
    for(unsigned traitsIndex = 0; traitsIndex < traitsJsonList.GetLength(); ++traitsIndex)
    {
      m_traits.push_back(traitsJsonList[traitsIndex].AsObject());
    }
    m_traitsHasBeenSet = true;
  }

  return *this;
}

JsonValue ICD10CMAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ICD10CMAttributeTypeMapper::GetNameForICD10CMAttributeType(m_type));
  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("Score", m_score);

  }

  if(m_relationshipScoreHasBeenSet)
  {
   payload.WithDouble("RelationshipScore", m_relationshipScore);

  }

  if(m_idHasBeenSet)
  {
   payload.WithInteger("Id", m_id);

  }

  if(m_beginOffsetHasBeenSet)
  {
   payload.WithInteger("BeginOffset", m_beginOffset);

  }

  if(m_endOffsetHasBeenSet)
  {
   payload.WithInteger("EndOffset", m_endOffset);

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_traitsHasBeenSet)
  {
   Array<JsonValue> traitsJsonList(m_traits.size());
   for(unsigned traitsIndex = 0; traitsIndex < traitsJsonList.GetLength(); ++traitsIndex)
   {
     traitsJsonList[traitsIndex].AsObject(m_traits[traitsIndex].Jsonize());
   }
   payload.WithArray("Traits", std::move(traitsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws