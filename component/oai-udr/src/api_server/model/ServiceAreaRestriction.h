/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/**
 * Nudr_DataRepository API OpenAPI file
 * Unified Data Repository Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * ServiceAreaRestriction.h
 *
 *
 */

#ifndef ServiceAreaRestriction_H_
#define ServiceAreaRestriction_H_

#include <nlohmann/json.hpp>
#include <vector>

#include "Area.h"
#include "RestrictionType.h"

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class ServiceAreaRestriction {
 public:
  ServiceAreaRestriction();
  virtual ~ServiceAreaRestriction();

  void validate();

  /////////////////////////////////////////////
  /// ServiceAreaRestriction members

  /// <summary>
  ///
  /// </summary>
  RestrictionType getRestrictionType() const;
  void setRestrictionType(RestrictionType const& value);
  bool restrictionTypeIsSet() const;
  void unsetRestrictionType();
  /// <summary>
  ///
  /// </summary>
  std::vector<Area>& getAreas();
  void setAreas(std::vector<Area> const& value);
  bool areasIsSet() const;
  void unsetAreas();
  /// <summary>
  ///
  /// </summary>
  int32_t getMaxNumOfTAs() const;
  void setMaxNumOfTAs(int32_t const value);
  bool maxNumOfTAsIsSet() const;
  void unsetMaxNumOfTAs();
  /// <summary>
  ///
  /// </summary>
  int32_t getMaxNumOfTAsForNotAllowedAreas() const;
  void setMaxNumOfTAsForNotAllowedAreas(int32_t const value);
  bool maxNumOfTAsForNotAllowedAreasIsSet() const;
  void unsetMaxNumOfTAsForNotAllowedAreas();

  friend void to_json(nlohmann::json& j, const ServiceAreaRestriction& o);
  friend void from_json(const nlohmann::json& j, ServiceAreaRestriction& o);

 protected:
  RestrictionType m_RestrictionType;
  bool m_RestrictionTypeIsSet;
  std::vector<Area> m_Areas;
  bool m_AreasIsSet;
  int32_t m_MaxNumOfTAs;
  bool m_MaxNumOfTAsIsSet;
  int32_t m_MaxNumOfTAsForNotAllowedAreas;
  bool m_MaxNumOfTAsForNotAllowedAreasIsSet;
};

}  // namespace oai::udr::model

#endif /* ServiceAreaRestriction_H_ */
