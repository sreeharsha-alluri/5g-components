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

#include "ValidTimePeriod.h"

namespace oai::udr::model {

ValidTimePeriod::ValidTimePeriod() {
  m_StartTime      = "";
  m_StartTimeIsSet = false;
  m_EndTime        = "";
  m_EndTimeIsSet   = false;
}

ValidTimePeriod::~ValidTimePeriod() {}

void ValidTimePeriod::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const ValidTimePeriod& o) {
  j = nlohmann::json();
  if (o.startTimeIsSet()) j["startTime"] = o.m_StartTime;
  if (o.endTimeIsSet()) j["endTime"] = o.m_EndTime;
}

void from_json(const nlohmann::json& j, ValidTimePeriod& o) {
  if (j.find("startTime") != j.end()) {
    j.at("startTime").get_to(o.m_StartTime);
    o.m_StartTimeIsSet = true;
  }
  if (j.find("endTime") != j.end()) {
    j.at("endTime").get_to(o.m_EndTime);
    o.m_EndTimeIsSet = true;
  }
}

std::string ValidTimePeriod::getStartTime() const {
  return m_StartTime;
}
void ValidTimePeriod::setStartTime(std::string const& value) {
  m_StartTime      = value;
  m_StartTimeIsSet = true;
}
bool ValidTimePeriod::startTimeIsSet() const {
  return m_StartTimeIsSet;
}
void ValidTimePeriod::unsetStartTime() {
  m_StartTimeIsSet = false;
}
std::string ValidTimePeriod::getEndTime() const {
  return m_EndTime;
}
void ValidTimePeriod::setEndTime(std::string const& value) {
  m_EndTime      = value;
  m_EndTimeIsSet = true;
}
bool ValidTimePeriod::endTimeIsSet() const {
  return m_EndTimeIsSet;
}
void ValidTimePeriod::unsetEndTime() {
  m_EndTimeIsSet = false;
}

}  // namespace oai::udr::model
