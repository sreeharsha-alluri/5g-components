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
 * ReportingOptions.h
 *
 *
 */

#ifndef ReportingOptions_H_
#define ReportingOptions_H_

#include "NotificationFlag.h"
#include "EventReportMode.h"
#include <string>
#include <nlohmann/json.hpp>

namespace oai::udm::model {

/// <summary>
///
/// </summary>
class ReportingOptions {
 public:
  ReportingOptions();
  virtual ~ReportingOptions() = default;

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

  bool operator==(const ReportingOptions& rhs) const;
  bool operator!=(const ReportingOptions& rhs) const;

  /////////////////////////////////////////////
  /// ReportingOptions members

  /// <summary>
  ///
  /// </summary>
  EventReportMode getReportMode() const;
  void setReportMode(EventReportMode const& value);
  bool reportModeIsSet() const;
  void unsetReportMode();
  /// <summary>
  ///
  /// </summary>
  int32_t getMaxNumOfReports() const;
  void setMaxNumOfReports(int32_t const value);
  bool maxNumOfReportsIsSet() const;
  void unsetMaxNumOfReports();
  /// <summary>
  ///
  /// </summary>
  std::string getExpiry() const;
  void setExpiry(std::string const& value);
  bool expiryIsSet() const;
  void unsetExpiry();
  /// <summary>
  ///
  /// </summary>
  int32_t getSamplingRatio() const;
  void setSamplingRatio(int32_t const value);
  bool samplingRatioIsSet() const;
  void unsetSamplingRatio();
  /// <summary>
  ///
  /// </summary>
  int32_t getGuardTime() const;
  void setGuardTime(int32_t const value);
  bool guardTimeIsSet() const;
  void unsetGuardTime();
  /// <summary>
  ///
  /// </summary>
  int32_t getReportPeriod() const;
  void setReportPeriod(int32_t const value);
  bool reportPeriodIsSet() const;
  void unsetReportPeriod();
  /// <summary>
  ///
  /// </summary>
  NotificationFlag getNotifFlag() const;
  void setNotifFlag(NotificationFlag const& value);
  bool notifFlagIsSet() const;
  void unsetNotifFlag();

  friend void to_json(nlohmann::json& j, const ReportingOptions& o);
  friend void from_json(const nlohmann::json& j, ReportingOptions& o);

 protected:
  EventReportMode m_ReportMode;
  bool m_ReportModeIsSet;
  int32_t m_MaxNumOfReports;
  bool m_MaxNumOfReportsIsSet;
  std::string m_Expiry;
  bool m_ExpiryIsSet;
  int32_t m_SamplingRatio;
  bool m_SamplingRatioIsSet;
  int32_t m_GuardTime;
  bool m_GuardTimeIsSet;
  int32_t m_ReportPeriod;
  bool m_ReportPeriodIsSet;
  NotificationFlag m_NotifFlag;
  bool m_NotifFlagIsSet;

  // Helper overload for validate. Used when one model stores another model and
  // calls it's validate.
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;
};

}  // namespace oai::udm::model

#endif /* ReportingOptions_H_ */
