/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-Containers"
 * 	found in "asn.1/Container Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -gen-PER -D src`
 */

#ifndef _Ngap_PrivateIE_Field_H_
#define _Ngap_PrivateIE_Field_H_

#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_PrivateIE-ID.h"
#include "Ngap_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_PrivateMessageIEs__value_PR {
  Ngap_PrivateMessageIEs__value_PR_NOTHING /* No components present */

} Ngap_PrivateMessageIEs__value_PR;

/* Ngap_PrivateIE-Field */
typedef struct Ngap_PrivateMessageIEs {
  Ngap_PrivateIE_ID_t id;
  Ngap_Criticality_t criticality;
  struct Ngap_PrivateMessageIEs__value {
    Ngap_PrivateMessageIEs__value_PR present;
    union Ngap_PrivateMessageIEs__Ngap_value_u {
    } choice;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
  } value;

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} Ngap_PrivateMessageIEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_PrivateMessageIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_PrivateMessageIEs_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_PrivateMessageIEs_1[3];

#ifdef __cplusplus
}
#endif

#endif /* _Ngap_PrivateIE_Field_H_ */
#include <asn_internal.h>