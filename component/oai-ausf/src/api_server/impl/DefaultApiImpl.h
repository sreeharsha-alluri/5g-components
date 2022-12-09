/**
 * AUSF API
 * AUSF UE Authentication Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 *file except in compliance with the License. You may obtain a copy of the
 *License at
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

/*
 * DefaultApiImpl.h
 *
 *
 */

#ifndef DEFAULT_API_IMPL_H_
#define DEFAULT_API_IMPL_H_

#include <memory>
#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include <DefaultApi.h>

#include <pistache/optional.h>

#include "AuthenticationInfo.h"
#include "ConfirmationData.h"
#include "ConfirmationDataResponse.h"
#include "DeregistrationInfo.h"
#include "EapSession.h"
#include "ProblemDetails.h"
#include "RgAuthCtx.h"
#include "RgAuthenticationInfo.h"
#include "UEAuthenticationCtx.h"
#include "ausf_app.hpp"
#include <string>

namespace oai {
namespace ausf_server {
namespace api {

using namespace oai::ausf::app;
using namespace oai::ausf_server::model;

class DefaultApiImpl : public oai::ausf_server::api::DefaultApi {
 public:
  DefaultApiImpl(
      std::shared_ptr<Pistache::Rest::Router>, ausf_app* ausf_app_inst,
      std::string address);
  ~DefaultApiImpl() {}

  void eap_auth_method(
      const std::string& authCtxId, const EapSession& eapSession,
      Pistache::Http::ResponseWriter& response);
  void rg_authentications_post(
      const RgAuthenticationInfo& rgAuthenticationInfo,
      Pistache::Http::ResponseWriter& response);
  void ue_authentications_auth_ctx_id5g_aka_confirmation_put(
      const std::string& authCtxId, const ConfirmationData& confirmationData,
      Pistache::Http::ResponseWriter& response);
  void ue_authentications_deregister_post(
      const DeregistrationInfo& deregistrationInfo,
      Pistache::Http::ResponseWriter& response);
  void ue_authentications_post(
      const AuthenticationInfo& authenticationInfo,
      Pistache::Http::ResponseWriter& response);

 private:
  ausf_app* m_ausf_app;
  std::string m_address;
};

}  // namespace api
}  // namespace ausf_server
}  // namespace oai

#endif