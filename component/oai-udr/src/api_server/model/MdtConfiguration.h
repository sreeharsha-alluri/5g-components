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
 * MdtConfiguration.h
 *
 *
 */

#ifndef MdtConfiguration_H_
#define MdtConfiguration_H_

#include <nlohmann/json.hpp>
#include <vector>

#include "AreaScope.h"
#include "CollectionPeriodRmmLteMdt.h"
#include "CollectionPeriodRmmNrMdt.h"
#include "EventForMdt.h"
#include "InterFreqTargetInfo.h"
#include "JobType.h"
#include "LoggingDurationMdt.h"
#include "LoggingDurationNrMdt.h"
#include "LoggingIntervalMdt.h"
#include "LoggingIntervalNrMdt.h"
#include "MbsfnArea.h"
#include "MeasurementLteForMdt.h"
#include "MeasurementNrForMdt.h"
#include "MeasurementPeriodLteMdt.h"
#include "PlmnId.h"
#include "PositioningMethodMdt.h"
#include "ReportAmountMdt.h"
#include "ReportIntervalMdt.h"
#include "ReportIntervalNrMdt.h"
#include "ReportTypeMdt.h"
#include "ReportingTrigger.h"
#include "SensorMeasurement.h"

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class MdtConfiguration {
 public:
  MdtConfiguration();
  virtual ~MdtConfiguration();

  void validate();

  /////////////////////////////////////////////
  /// MdtConfiguration members

  /// <summary>
  ///
  /// </summary>
  JobType getJobType() const;
  void setJobType(JobType const& value);
  /// <summary>
  ///
  /// </summary>
  ReportTypeMdt getReportType() const;
  void setReportType(ReportTypeMdt const& value);
  bool reportTypeIsSet() const;
  void unsetReportType();
  /// <summary>
  ///
  /// </summary>
  AreaScope getAreaScope() const;
  void setAreaScope(AreaScope const& value);
  bool areaScopeIsSet() const;
  void unsetAreaScope();
  /// <summary>
  ///
  /// </summary>
  std::vector<MeasurementLteForMdt>& getMeasurementLteList();
  void setMeasurementLteList(std::vector<MeasurementLteForMdt> const& value);
  bool measurementLteListIsSet() const;
  void unsetMeasurementLteList();
  /// <summary>
  ///
  /// </summary>
  std::vector<MeasurementNrForMdt>& getMeasurementNrList();
  void setMeasurementNrList(std::vector<MeasurementNrForMdt> const& value);
  bool measurementNrListIsSet() const;
  void unsetMeasurementNrList();
  /// <summary>
  ///
  /// </summary>
  std::vector<SensorMeasurement>& getSensorMeasurementList();
  void setSensorMeasurementList(std::vector<SensorMeasurement> const& value);
  bool sensorMeasurementListIsSet() const;
  void unsetSensorMeasurementList();
  /// <summary>
  ///
  /// </summary>
  std::vector<ReportingTrigger>& getReportingTriggerList();
  void setReportingTriggerList(std::vector<ReportingTrigger> const& value);
  bool reportingTriggerListIsSet() const;
  void unsetReportingTriggerList();
  /// <summary>
  ///
  /// </summary>
  ReportIntervalMdt getReportInterval() const;
  void setReportInterval(ReportIntervalMdt const& value);
  bool reportIntervalIsSet() const;
  void unsetReportInterval();
  /// <summary>
  ///
  /// </summary>
  ReportIntervalNrMdt getReportIntervalNr() const;
  void setReportIntervalNr(ReportIntervalNrMdt const& value);
  bool reportIntervalNrIsSet() const;
  void unsetReportIntervalNr();
  /// <summary>
  ///
  /// </summary>
  ReportAmountMdt getReportAmount() const;
  void setReportAmount(ReportAmountMdt const& value);
  bool reportAmountIsSet() const;
  void unsetReportAmount();
  /// <summary>
  ///
  /// </summary>
  int32_t getEventThresholdRsrp() const;
  void setEventThresholdRsrp(int32_t const value);
  bool eventThresholdRsrpIsSet() const;
  void unsetEventThresholdRsrp();
  /// <summary>
  ///
  /// </summary>
  int32_t getEventThresholdRsrpNr() const;
  void setEventThresholdRsrpNr(int32_t const value);
  bool eventThresholdRsrpNrIsSet() const;
  void unsetEventThresholdRsrpNr();
  /// <summary>
  ///
  /// </summary>
  int32_t getEventThresholdRsrq() const;
  void setEventThresholdRsrq(int32_t const value);
  bool eventThresholdRsrqIsSet() const;
  void unsetEventThresholdRsrq();
  /// <summary>
  ///
  /// </summary>
  int32_t getEventThresholdRsrqNr() const;
  void setEventThresholdRsrqNr(int32_t const value);
  bool eventThresholdRsrqNrIsSet() const;
  void unsetEventThresholdRsrqNr();
  /// <summary>
  ///
  /// </summary>
  std::vector<EventForMdt>& getEventList();
  void setEventList(std::vector<EventForMdt> const& value);
  bool eventListIsSet() const;
  void unsetEventList();
  /// <summary>
  ///
  /// </summary>
  LoggingIntervalMdt getLoggingInterval() const;
  void setLoggingInterval(LoggingIntervalMdt const& value);
  bool loggingIntervalIsSet() const;
  void unsetLoggingInterval();
  /// <summary>
  ///
  /// </summary>
  LoggingIntervalNrMdt getLoggingIntervalNr() const;
  void setLoggingIntervalNr(LoggingIntervalNrMdt const& value);
  bool loggingIntervalNrIsSet() const;
  void unsetLoggingIntervalNr();
  /// <summary>
  ///
  /// </summary>
  LoggingDurationMdt getLoggingDuration() const;
  void setLoggingDuration(LoggingDurationMdt const& value);
  bool loggingDurationIsSet() const;
  void unsetLoggingDuration();
  /// <summary>
  ///
  /// </summary>
  LoggingDurationNrMdt getLoggingDurationNr() const;
  void setLoggingDurationNr(LoggingDurationNrMdt const& value);
  bool loggingDurationNrIsSet() const;
  void unsetLoggingDurationNr();
  /// <summary>
  ///
  /// </summary>
  PositioningMethodMdt getPositioningMethod() const;
  void setPositioningMethod(PositioningMethodMdt const& value);
  bool positioningMethodIsSet() const;
  void unsetPositioningMethod();
  /// <summary>
  ///
  /// </summary>
  CollectionPeriodRmmLteMdt getCollectionPeriodRmmLte() const;
  void setCollectionPeriodRmmLte(CollectionPeriodRmmLteMdt const& value);
  bool collectionPeriodRmmLteIsSet() const;
  void unsetCollectionPeriodRmmLte();
  /// <summary>
  ///
  /// </summary>
  CollectionPeriodRmmNrMdt getCollectionPeriodRmmNr() const;
  void setCollectionPeriodRmmNr(CollectionPeriodRmmNrMdt const& value);
  bool collectionPeriodRmmNrIsSet() const;
  void unsetCollectionPeriodRmmNr();
  /// <summary>
  ///
  /// </summary>
  MeasurementPeriodLteMdt getMeasurementPeriodLte() const;
  void setMeasurementPeriodLte(MeasurementPeriodLteMdt const& value);
  bool measurementPeriodLteIsSet() const;
  void unsetMeasurementPeriodLte();
  /// <summary>
  ///
  /// </summary>
  std::vector<PlmnId>& getMdtAllowedPlmnIdList();
  void setMdtAllowedPlmnIdList(std::vector<PlmnId> const& value);
  bool mdtAllowedPlmnIdListIsSet() const;
  void unsetMdtAllowedPlmnIdList();
  /// <summary>
  ///
  /// </summary>
  std::vector<MbsfnArea>& getMbsfnAreaList();
  void setMbsfnAreaList(std::vector<MbsfnArea> const& value);
  bool mbsfnAreaListIsSet() const;
  void unsetMbsfnAreaList();
  /// <summary>
  ///
  /// </summary>
  std::vector<InterFreqTargetInfo>& getInterFreqTargetList();
  void setInterFreqTargetList(std::vector<InterFreqTargetInfo> const& value);
  bool interFreqTargetListIsSet() const;
  void unsetInterFreqTargetList();

  friend void to_json(nlohmann::json& j, const MdtConfiguration& o);
  friend void from_json(const nlohmann::json& j, MdtConfiguration& o);

 protected:
  JobType m_JobType;

  ReportTypeMdt m_ReportType;
  bool m_ReportTypeIsSet;
  AreaScope m_AreaScope;
  bool m_AreaScopeIsSet;
  std::vector<MeasurementLteForMdt> m_MeasurementLteList;
  bool m_MeasurementLteListIsSet;
  std::vector<MeasurementNrForMdt> m_MeasurementNrList;
  bool m_MeasurementNrListIsSet;
  std::vector<SensorMeasurement> m_SensorMeasurementList;
  bool m_SensorMeasurementListIsSet;
  std::vector<ReportingTrigger> m_ReportingTriggerList;
  bool m_ReportingTriggerListIsSet;
  ReportIntervalMdt m_ReportInterval;
  bool m_ReportIntervalIsSet;
  ReportIntervalNrMdt m_ReportIntervalNr;
  bool m_ReportIntervalNrIsSet;
  ReportAmountMdt m_ReportAmount;
  bool m_ReportAmountIsSet;
  int32_t m_EventThresholdRsrp;
  bool m_EventThresholdRsrpIsSet;
  int32_t m_EventThresholdRsrpNr;
  bool m_EventThresholdRsrpNrIsSet;
  int32_t m_EventThresholdRsrq;
  bool m_EventThresholdRsrqIsSet;
  int32_t m_EventThresholdRsrqNr;
  bool m_EventThresholdRsrqNrIsSet;
  std::vector<EventForMdt> m_EventList;
  bool m_EventListIsSet;
  LoggingIntervalMdt m_LoggingInterval;
  bool m_LoggingIntervalIsSet;
  LoggingIntervalNrMdt m_LoggingIntervalNr;
  bool m_LoggingIntervalNrIsSet;
  LoggingDurationMdt m_LoggingDuration;
  bool m_LoggingDurationIsSet;
  LoggingDurationNrMdt m_LoggingDurationNr;
  bool m_LoggingDurationNrIsSet;
  PositioningMethodMdt m_PositioningMethod;
  bool m_PositioningMethodIsSet;
  CollectionPeriodRmmLteMdt m_CollectionPeriodRmmLte;
  bool m_CollectionPeriodRmmLteIsSet;
  CollectionPeriodRmmNrMdt m_CollectionPeriodRmmNr;
  bool m_CollectionPeriodRmmNrIsSet;
  MeasurementPeriodLteMdt m_MeasurementPeriodLte;
  bool m_MeasurementPeriodLteIsSet;
  std::vector<PlmnId> m_MdtAllowedPlmnIdList;
  bool m_MdtAllowedPlmnIdListIsSet;
  std::vector<MbsfnArea> m_MbsfnAreaList;
  bool m_MbsfnAreaListIsSet;
  std::vector<InterFreqTargetInfo> m_InterFreqTargetList;
  bool m_InterFreqTargetListIsSet;
};

}  // namespace oai::udr::model

#endif /* MdtConfiguration_H_ */
