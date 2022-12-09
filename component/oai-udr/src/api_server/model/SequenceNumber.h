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
 * SequenceNumber.h
 *
 *
 */

#ifndef SequenceNumber_H_
#define SequenceNumber_H_

#include <map>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "Sign.h"
#include "SqnScheme.h"

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class SequenceNumber {
 public:
  SequenceNumber();
  virtual ~SequenceNumber();

  void validate();

  /////////////////////////////////////////////
  /// SequenceNumber members

  /// <summary>
  ///
  /// </summary>
  std::string getSqnScheme() const;
  void setSqnScheme(std::string const& value);
  bool sqnSchemeIsSet() const;
  void unsetSqnScheme();
  /// <summary>
  ///
  /// </summary>
  std::string getSqn() const;
  void setSqn(std::string const& value);
  bool sqnIsSet() const;
  void unsetSqn();
  /// <summary>
  ///
  /// </summary>
  std::map<std::string, int32_t>& getLastIndexes();
  void setLastIndexes(std::map<std::string, int32_t> const value);
  bool lastIndexesIsSet() const;
  void unsetLastIndexes();
  /// <summary>
  ///
  /// </summary>
  int32_t getIndLength() const;
  void setIndLength(int32_t const value);
  bool indLengthIsSet() const;
  void unsetIndLength();
  /// <summary>
  ///
  /// </summary>
  Sign getDifSign() const;
  void setDifSign(Sign const& value);
  bool difSignIsSet() const;
  void unsetDifSign();

  friend void to_json(nlohmann::json& j, const SequenceNumber& o);
  friend void from_json(const nlohmann::json& j, SequenceNumber& o);

 protected:
  std::string m_SqnScheme;
  bool m_SqnSchemeIsSet;
  std::string m_Sqn;
  bool m_SqnIsSet;
  std::map<std::string, int32_t> m_LastIndexes;
  bool m_LastIndexesIsSet;
  int32_t m_IndLength;
  bool m_IndLengthIsSet;
  Sign m_DifSign;
  bool m_DifSignIsSet;
};

}  // namespace oai::udr::model

#endif /* SequenceNumber_H_ */
