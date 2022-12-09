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

#include "PDUSessionResourceHandoverItem.hpp"

namespace ngap {

//------------------------------------------------------------------------------
PDUSessionResourceHandoverItem::PDUSessionResourceHandoverItem() {}

//------------------------------------------------------------------------------
PDUSessionResourceHandoverItem::~PDUSessionResourceHandoverItem() {}

//------------------------------------------------------------------------------
void PDUSessionResourceHandoverItem::setPDUSessionResourceHandoverItem(
    const PDUSessionID& sessionID, const OCTET_STRING_t& commandTransfer) {
  pDUSessionID            = sessionID;
  handoverCommandTransfer = commandTransfer;
}

//------------------------------------------------------------------------------
void PDUSessionResourceHandoverItem::getPDUSessionResourceHandoverItem(
    PDUSessionID& sessionID, OCTET_STRING_t& commandTransfer) {
  sessionID       = pDUSessionID;
  commandTransfer = handoverCommandTransfer;
}

//------------------------------------------------------------------------------
bool PDUSessionResourceHandoverItem::encode(
    Ngap_PDUSessionResourceHandoverItem_t& item) {
  if (!pDUSessionID.encode2PDUSessionID(item.pDUSessionID)) return false;
  item.handoverCommandTransfer = handoverCommandTransfer;
  return true;
}

//------------------------------------------------------------------------------
bool PDUSessionResourceHandoverItem::decode(
    const Ngap_PDUSessionResourceHandoverItem_t& item) {
  if (!pDUSessionID.decodefromPDUSessionID(item.pDUSessionID)) return false;
  handoverCommandTransfer = item.handoverCommandTransfer;
  return true;
}
}  // namespace ngap
