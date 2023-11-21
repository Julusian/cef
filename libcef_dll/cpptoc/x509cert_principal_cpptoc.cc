// Copyright (c) 2023 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=513c53172ce1c11c036ff200d1ea73c4015b7f3d$
//

#include "libcef_dll/cpptoc/x509cert_principal_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"
#include "libcef_dll/transfer_util.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

cef_string_userfree_t CEF_CALLBACK
x509cert_principal_get_display_name(struct _cef_x509cert_principal_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefX509CertPrincipalCppToC::Get(self)->GetDisplayName();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK
x509cert_principal_get_common_name(struct _cef_x509cert_principal_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefX509CertPrincipalCppToC::Get(self)->GetCommonName();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK
x509cert_principal_get_locality_name(struct _cef_x509cert_principal_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefX509CertPrincipalCppToC::Get(self)->GetLocalityName();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK
x509cert_principal_get_state_or_province_name(
    struct _cef_x509cert_principal_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval =
      CefX509CertPrincipalCppToC::Get(self)->GetStateOrProvinceName();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK
x509cert_principal_get_country_name(struct _cef_x509cert_principal_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefX509CertPrincipalCppToC::Get(self)->GetCountryName();

  // Return type: string
  return _retval.DetachToUserFree();
}

void CEF_CALLBACK
x509cert_principal_get_street_addresses(struct _cef_x509cert_principal_t* self,
                                        cef_string_list_t addresses) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: addresses; type: string_vec_byref
  DCHECK(addresses);
  if (!addresses)
    return;

  // Translate param: addresses; type: string_vec_byref
  std::vector<CefString> addressesList;
  transfer_string_list_contents(addresses, addressesList);

  // Execute
  CefX509CertPrincipalCppToC::Get(self)->GetStreetAddresses(addressesList);

  // Restore param: addresses; type: string_vec_byref
  cef_string_list_clear(addresses);
  transfer_string_list_contents(addressesList, addresses);
}

void CEF_CALLBACK x509cert_principal_get_organization_names(
    struct _cef_x509cert_principal_t* self,
    cef_string_list_t names) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: names; type: string_vec_byref
  DCHECK(names);
  if (!names)
    return;

  // Translate param: names; type: string_vec_byref
  std::vector<CefString> namesList;
  transfer_string_list_contents(names, namesList);

  // Execute
  CefX509CertPrincipalCppToC::Get(self)->GetOrganizationNames(namesList);

  // Restore param: names; type: string_vec_byref
  cef_string_list_clear(names);
  transfer_string_list_contents(namesList, names);
}

void CEF_CALLBACK x509cert_principal_get_organization_unit_names(
    struct _cef_x509cert_principal_t* self,
    cef_string_list_t names) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: names; type: string_vec_byref
  DCHECK(names);
  if (!names)
    return;

  // Translate param: names; type: string_vec_byref
  std::vector<CefString> namesList;
  transfer_string_list_contents(names, namesList);

  // Execute
  CefX509CertPrincipalCppToC::Get(self)->GetOrganizationUnitNames(namesList);

  // Restore param: names; type: string_vec_byref
  cef_string_list_clear(names);
  transfer_string_list_contents(namesList, names);
}

void CEF_CALLBACK
x509cert_principal_get_domain_components(struct _cef_x509cert_principal_t* self,
                                         cef_string_list_t components) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: components; type: string_vec_byref
  DCHECK(components);
  if (!components)
    return;

  // Translate param: components; type: string_vec_byref
  std::vector<CefString> componentsList;
  transfer_string_list_contents(components, componentsList);

  // Execute
  CefX509CertPrincipalCppToC::Get(self)->GetDomainComponents(componentsList);

  // Restore param: components; type: string_vec_byref
  cef_string_list_clear(components);
  transfer_string_list_contents(componentsList, components);
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefX509CertPrincipalCppToC::CefX509CertPrincipalCppToC() {
  GetStruct()->get_display_name = x509cert_principal_get_display_name;
  GetStruct()->get_common_name = x509cert_principal_get_common_name;
  GetStruct()->get_locality_name = x509cert_principal_get_locality_name;
  GetStruct()->get_state_or_province_name =
      x509cert_principal_get_state_or_province_name;
  GetStruct()->get_country_name = x509cert_principal_get_country_name;
  GetStruct()->get_street_addresses = x509cert_principal_get_street_addresses;
  GetStruct()->get_organization_names =
      x509cert_principal_get_organization_names;
  GetStruct()->get_organization_unit_names =
      x509cert_principal_get_organization_unit_names;
  GetStruct()->get_domain_components = x509cert_principal_get_domain_components;
}

// DESTRUCTOR - Do not edit by hand.

CefX509CertPrincipalCppToC::~CefX509CertPrincipalCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefX509CertPrincipal> CefCppToCRefCounted<
    CefX509CertPrincipalCppToC,
    CefX509CertPrincipal,
    cef_x509cert_principal_t>::UnwrapDerived(CefWrapperType type,
                                             cef_x509cert_principal_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefX509CertPrincipalCppToC,
                                   CefX509CertPrincipal,
                                   cef_x509cert_principal_t>::kWrapperType =
    WT_X509CERT_PRINCIPAL;
