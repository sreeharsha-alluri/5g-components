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
 * Nudm_UEAU
 * UDM UE Authentication Service. � 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * HssAuthenticationVectors.h
 *
 *
 */

#ifndef HssAuthenticationVectors_H_
#define HssAuthenticationVectors_H_

#include <nlohmann/json.hpp>

namespace oai {
namespace udm {
namespace model {

/// <summary>
///
/// </summary>
class HssAuthenticationVectors {
 public:
  HssAuthenticationVectors();
  virtual ~HssAuthenticationVectors();

  void validate();

  /////////////////////////////////////////////
  /// HssAuthenticationVectors members

  friend void to_json(nlohmann::json& j, const HssAuthenticationVectors& o);
  friend void from_json(const nlohmann::json& j, HssAuthenticationVectors& o);

 protected:
};

}  // namespace model
}  // namespace udm
}  // namespace oai

#endif /* HssAuthenticationVectors_H_ */
