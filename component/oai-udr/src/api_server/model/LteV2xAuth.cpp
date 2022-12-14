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

#include "LteV2xAuth.h"

namespace oai::udr::model {

LteV2xAuth::LteV2xAuth() {
  m_VehicleUeAuthIsSet    = false;
  m_PedestrianUeAuthIsSet = false;
}

LteV2xAuth::~LteV2xAuth() {}

void LteV2xAuth::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const LteV2xAuth& o) {
  j = nlohmann::json();
  if (o.vehicleUeAuthIsSet()) j["vehicleUeAuth"] = o.m_VehicleUeAuth;
  if (o.pedestrianUeAuthIsSet()) j["pedestrianUeAuth"] = o.m_PedestrianUeAuth;
}

void from_json(const nlohmann::json& j, LteV2xAuth& o) {
  if (j.find("vehicleUeAuth") != j.end()) {
    j.at("vehicleUeAuth").get_to(o.m_VehicleUeAuth);
    o.m_VehicleUeAuthIsSet = true;
  }
  if (j.find("pedestrianUeAuth") != j.end()) {
    j.at("pedestrianUeAuth").get_to(o.m_PedestrianUeAuth);
    o.m_PedestrianUeAuthIsSet = true;
  }
}

UeAuth LteV2xAuth::getVehicleUeAuth() const {
  return m_VehicleUeAuth;
}
void LteV2xAuth::setVehicleUeAuth(UeAuth const& value) {
  m_VehicleUeAuth      = value;
  m_VehicleUeAuthIsSet = true;
}
bool LteV2xAuth::vehicleUeAuthIsSet() const {
  return m_VehicleUeAuthIsSet;
}
void LteV2xAuth::unsetVehicleUeAuth() {
  m_VehicleUeAuthIsSet = false;
}
UeAuth LteV2xAuth::getPedestrianUeAuth() const {
  return m_PedestrianUeAuth;
}
void LteV2xAuth::setPedestrianUeAuth(UeAuth const& value) {
  m_PedestrianUeAuth      = value;
  m_PedestrianUeAuthIsSet = true;
}
bool LteV2xAuth::pedestrianUeAuthIsSet() const {
  return m_PedestrianUeAuthIsSet;
}
void LteV2xAuth::unsetPedestrianUeAuth() {
  m_PedestrianUeAuthIsSet = false;
}

}  // namespace oai::udr::model
