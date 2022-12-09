/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "Inline_response_200.h"

namespace oai {
namespace nrf {
namespace model {

Inline_response_200::Inline_response_200() {
  m__linksIsSet = false;
}

Inline_response_200::~Inline_response_200() {}

void Inline_response_200::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const Inline_response_200& o) {
  j = nlohmann::json();
  if (o.linksIsSet() || !o.m__links.empty()) j["_links"] = o.m__links;
}

void from_json(const nlohmann::json& j, Inline_response_200& o) {
  if (j.find("_links") != j.end()) {
    j.at("_links").get_to(o.m__links);
    o.m__linksIsSet = true;
  }
}

std::map<std::string, LinksValueSchema>& Inline_response_200::getLinks() {
  return m__links;
}
void Inline_response_200::setLinks(
    std::map<std::string, LinksValueSchema> const& value) {
  m__links      = value;
  m__linksIsSet = true;
}
bool Inline_response_200::linksIsSet() const {
  return m__linksIsSet;
}
void Inline_response_200::unset_links() {
  m__linksIsSet = false;
}

}  // namespace model
}  // namespace nrf
}  // namespace oai
