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

#include "UeId.h"

namespace oai::udr::model {

UeId::UeId() {
  m_Supi          = "";
  m_GpsiListIsSet = false;
}

UeId::~UeId() {}

void UeId::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const UeId& o) {
  j         = nlohmann::json();
  j["supi"] = o.m_Supi;
  if (o.gpsiListIsSet() || !o.m_GpsiList.empty()) j["gpsiList"] = o.m_GpsiList;
}

void from_json(const nlohmann::json& j, UeId& o) {
  j.at("supi").get_to(o.m_Supi);
  if (j.find("gpsiList") != j.end()) {
    j.at("gpsiList").get_to(o.m_GpsiList);
    o.m_GpsiListIsSet = true;
  }
}

std::string UeId::getSupi() const {
  return m_Supi;
}
void UeId::setSupi(std::string const& value) {
  m_Supi = value;
}
std::vector<std::string>& UeId::getGpsiList() {
  return m_GpsiList;
}
void UeId::setGpsiList(std::vector<std::string> const& value) {
  m_GpsiList      = value;
  m_GpsiListIsSet = true;
}
bool UeId::gpsiListIsSet() const {
  return m_GpsiListIsSet;
}
void UeId::unsetGpsiList() {
  m_GpsiListIsSet = false;
}

}  // namespace oai::udr::model
