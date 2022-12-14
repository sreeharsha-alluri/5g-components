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

#include "LocationArea.h"

namespace oai::udr::model {

LocationArea::LocationArea() {
  m_GeographicAreasIsSet = false;
  m_CivicAddressesIsSet  = false;
  m_NwAreaInfoIsSet      = false;
}

LocationArea::~LocationArea() {}

void LocationArea::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const LocationArea& o) {
  j = nlohmann::json();
  if (o.geographicAreasIsSet() || !o.m_GeographicAreas.empty())
    j["geographicAreas"] = o.m_GeographicAreas;
  if (o.civicAddressesIsSet() || !o.m_CivicAddresses.empty())
    j["civicAddresses"] = o.m_CivicAddresses;
  if (o.nwAreaInfoIsSet()) j["nwAreaInfo"] = o.m_NwAreaInfo;
}

void from_json(const nlohmann::json& j, LocationArea& o) {
  if (j.find("geographicAreas") != j.end()) {
    j.at("geographicAreas").get_to(o.m_GeographicAreas);
    o.m_GeographicAreasIsSet = true;
  }
  if (j.find("civicAddresses") != j.end()) {
    j.at("civicAddresses").get_to(o.m_CivicAddresses);
    o.m_CivicAddressesIsSet = true;
  }
  if (j.find("nwAreaInfo") != j.end()) {
    j.at("nwAreaInfo").get_to(o.m_NwAreaInfo);
    o.m_NwAreaInfoIsSet = true;
  }
}

std::vector<GeographicArea>& LocationArea::getGeographicAreas() {
  return m_GeographicAreas;
}
void LocationArea::setGeographicAreas(
    std::vector<GeographicArea> const& value) {
  m_GeographicAreas      = value;
  m_GeographicAreasIsSet = true;
}
bool LocationArea::geographicAreasIsSet() const {
  return m_GeographicAreasIsSet;
}
void LocationArea::unsetGeographicAreas() {
  m_GeographicAreasIsSet = false;
}
std::vector<CivicAddress>& LocationArea::getCivicAddresses() {
  return m_CivicAddresses;
}
void LocationArea::setCivicAddresses(std::vector<CivicAddress> const& value) {
  m_CivicAddresses      = value;
  m_CivicAddressesIsSet = true;
}
bool LocationArea::civicAddressesIsSet() const {
  return m_CivicAddressesIsSet;
}
void LocationArea::unsetCivicAddresses() {
  m_CivicAddressesIsSet = false;
}
NetworkAreaInfo LocationArea::getNwAreaInfo() const {
  return m_NwAreaInfo;
}
void LocationArea::setNwAreaInfo(NetworkAreaInfo const& value) {
  m_NwAreaInfo      = value;
  m_NwAreaInfoIsSet = true;
}
bool LocationArea::nwAreaInfoIsSet() const {
  return m_NwAreaInfoIsSet;
}
void LocationArea::unsetNwAreaInfo() {
  m_NwAreaInfoIsSet = false;
}

}  // namespace oai::udr::model
