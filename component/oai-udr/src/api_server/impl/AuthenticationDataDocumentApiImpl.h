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
 * Unified Data Repository Service API file for subscription data
 * Unified Data Repository Service (subscription data). The API version is
 * defined in 3GPP TS 29.504. © 2020, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: -
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * AuthenticationDataDocumentApiImpl.h
 *
 *
 */

#ifndef AUTHENTICATION_DATA_DOCUMENT_API_IMPL_H_
#define AUTHENTICATION_DATA_DOCUMENT_API_IMPL_H_

#include "udr_app.hpp"
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <AuthenticationDataDocumentApi.h>

#include "AuthenticationSubscription.h"
#include <string>

namespace oai::udr::api {

using namespace oai::udr::model;
using namespace oai::udr::app;

class AuthenticationDataDocumentApiImpl
    : public oai::udr::api::AuthenticationDataDocumentApi {
 private:
  udr_app* m_udr_app;
  std::string m_address;

 public:
  explicit AuthenticationDataDocumentApiImpl(
      const std::shared_ptr<Pistache::Rest::Router>& rtr, udr_app* udr_app_inst,
      std::string address);
  ~AuthenticationDataDocumentApiImpl() override = default;

  void create_auth_subs_data(
      const std::string& ueId,
      const AuthenticationSubscription& authenticationSubscription,
      Pistache::Http::ResponseWriter& response);
  void delete_auth_subs_data(
      const std::string& ueId, Pistache::Http::ResponseWriter& response);
};

}  // namespace oai::udr::api

#endif
