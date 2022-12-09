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
/*
 * UPInterfaceType.h
 *
 *
 */

#ifndef UPInterfaceType_H_
#define UPInterfaceType_H_

#include <nlohmann/json.hpp>

namespace oai {
namespace smf_server {
namespace model {

/// <summary>
///
/// </summary>
class UPInterfaceType {
 public:
  UPInterfaceType();
  virtual ~UPInterfaceType();

  void validate();

  /////////////////////////////////////////////
  /// UPInterfaceType members

  friend void to_json(nlohmann::json& j, const UPInterfaceType& o);
  friend void from_json(const nlohmann::json& j, UPInterfaceType& o);

 protected:
};

}  // namespace model
}  // namespace smf_server
}  // namespace oai

#endif /* UPInterfaceType_H_ */