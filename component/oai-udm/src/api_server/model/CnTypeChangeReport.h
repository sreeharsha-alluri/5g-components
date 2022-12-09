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
 * Nudm_EE
 * Nudm Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * CnTypeChangeReport.h
 *
 *
 */

#ifndef CnTypeChangeReport_H_
#define CnTypeChangeReport_H_

#include "CnType.h"
#include <nlohmann/json.hpp>

namespace oai::udm::model {

/// <summary>
///
/// </summary>
class CnTypeChangeReport {
 public:
  CnTypeChangeReport();
  virtual ~CnTypeChangeReport() = default;

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  bool operator==(const CnTypeChangeReport& rhs) const;
  bool operator!=(const CnTypeChangeReport& rhs) const;

  /////////////////////////////////////////////
  /// CnTypeChangeReport members

  /// <summary>
  ///
  /// </summary>
  CnType getNewCnType() const;
  void setNewCnType(CnType const& value);
  /// <summary>
  ///
  /// </summary>
  CnType getOldCnType() const;
  void setOldCnType(CnType const& value);
  bool oldCnTypeIsSet() const;
  void unsetOldCnType();

  friend void to_json(nlohmann::json& j, const CnTypeChangeReport& o);
  friend void from_json(const nlohmann::json& j, CnTypeChangeReport& o);

 protected:
  CnType m_NewCnType;

  CnType m_OldCnType;
  bool m_OldCnTypeIsSet;

  // Helper overload for validate. Used when one model stores another model and
  // calls it's validate.
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;
};

}  // namespace oai::udm::model

#endif /* CnTypeChangeReport_H_ */
