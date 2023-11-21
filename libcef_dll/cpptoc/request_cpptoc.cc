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
// $hash=4f55af31ee0cf2bde8f353e26283210430f2d871$
//

#include "libcef_dll/cpptoc/request_cpptoc.h"
#include "libcef_dll/cpptoc/post_data_cpptoc.h"
#include "libcef_dll/transfer_util.h"

// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_request_t* cef_request_create() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefRequest> _retval = CefRequest::Create();

  // Return type: refptr_same
  return CefRequestCppToC::Wrap(_retval);
}

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK request_is_read_only(struct _cef_request_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefRequestCppToC::Get(self)->IsReadOnly();

  // Return type: bool
  return _retval;
}

cef_string_userfree_t CEF_CALLBACK
request_get_url(struct _cef_request_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefRequestCppToC::Get(self)->GetURL();

  // Return type: string
  return _retval.DetachToUserFree();
}

void CEF_CALLBACK request_set_url(struct _cef_request_t* self,
                                  const cef_string_t* url) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: url; type: string_byref_const
  DCHECK(url);
  if (!url)
    return;

  // Execute
  CefRequestCppToC::Get(self)->SetURL(CefString(url));
}

cef_string_userfree_t CEF_CALLBACK
request_get_method(struct _cef_request_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefRequestCppToC::Get(self)->GetMethod();

  // Return type: string
  return _retval.DetachToUserFree();
}

void CEF_CALLBACK request_set_method(struct _cef_request_t* self,
                                     const cef_string_t* method) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: method; type: string_byref_const
  DCHECK(method);
  if (!method)
    return;

  // Execute
  CefRequestCppToC::Get(self)->SetMethod(CefString(method));
}

void CEF_CALLBACK request_set_referrer(struct _cef_request_t* self,
                                       const cef_string_t* referrer_url,
                                       cef_referrer_policy_t policy) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Unverified params: referrer_url

  // Execute
  CefRequestCppToC::Get(self)->SetReferrer(CefString(referrer_url), policy);
}

cef_string_userfree_t CEF_CALLBACK
request_get_referrer_url(struct _cef_request_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefRequestCppToC::Get(self)->GetReferrerURL();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_referrer_policy_t CEF_CALLBACK
request_get_referrer_policy(struct _cef_request_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return REFERRER_POLICY_DEFAULT;

  // Execute
  cef_referrer_policy_t _retval =
      CefRequestCppToC::Get(self)->GetReferrerPolicy();

  // Return type: simple
  return _retval;
}

struct _cef_post_data_t* CEF_CALLBACK
request_get_post_data(struct _cef_request_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefPostData> _retval = CefRequestCppToC::Get(self)->GetPostData();

  // Return type: refptr_same
  return CefPostDataCppToC::Wrap(_retval);
}

void CEF_CALLBACK request_set_post_data(struct _cef_request_t* self,
                                        struct _cef_post_data_t* postData) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: postData; type: refptr_same
  DCHECK(postData);
  if (!postData)
    return;

  // Execute
  CefRequestCppToC::Get(self)->SetPostData(CefPostDataCppToC::Unwrap(postData));
}

void CEF_CALLBACK request_get_header_map(struct _cef_request_t* self,
                                         cef_string_multimap_t headerMap) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: headerMap; type: string_map_multi_byref
  DCHECK(headerMap);
  if (!headerMap)
    return;

  // Translate param: headerMap; type: string_map_multi_byref
  std::multimap<CefString, CefString> headerMapMultimap;
  transfer_string_multimap_contents(headerMap, headerMapMultimap);

  // Execute
  CefRequestCppToC::Get(self)->GetHeaderMap(headerMapMultimap);

  // Restore param: headerMap; type: string_map_multi_byref
  cef_string_multimap_clear(headerMap);
  transfer_string_multimap_contents(headerMapMultimap, headerMap);
}

void CEF_CALLBACK request_set_header_map(struct _cef_request_t* self,
                                         cef_string_multimap_t headerMap) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: headerMap; type: string_map_multi_byref_const
  DCHECK(headerMap);
  if (!headerMap)
    return;

  // Translate param: headerMap; type: string_map_multi_byref_const
  std::multimap<CefString, CefString> headerMapMultimap;
  transfer_string_multimap_contents(headerMap, headerMapMultimap);

  // Execute
  CefRequestCppToC::Get(self)->SetHeaderMap(headerMapMultimap);
}

cef_string_userfree_t CEF_CALLBACK
request_get_header_by_name(struct _cef_request_t* self,
                           const cef_string_t* name) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;
  // Verify param: name; type: string_byref_const
  DCHECK(name);
  if (!name)
    return NULL;

  // Execute
  CefString _retval =
      CefRequestCppToC::Get(self)->GetHeaderByName(CefString(name));

  // Return type: string
  return _retval.DetachToUserFree();
}

void CEF_CALLBACK request_set_header_by_name(struct _cef_request_t* self,
                                             const cef_string_t* name,
                                             const cef_string_t* value,
                                             int overwrite) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: name; type: string_byref_const
  DCHECK(name);
  if (!name)
    return;
  // Unverified params: value

  // Execute
  CefRequestCppToC::Get(self)->SetHeaderByName(
      CefString(name), CefString(value), overwrite ? true : false);
}

void CEF_CALLBACK request_set(struct _cef_request_t* self,
                              const cef_string_t* url,
                              const cef_string_t* method,
                              struct _cef_post_data_t* postData,
                              cef_string_multimap_t headerMap) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: url; type: string_byref_const
  DCHECK(url);
  if (!url)
    return;
  // Verify param: method; type: string_byref_const
  DCHECK(method);
  if (!method)
    return;
  // Verify param: headerMap; type: string_map_multi_byref_const
  DCHECK(headerMap);
  if (!headerMap)
    return;
  // Unverified params: postData

  // Translate param: headerMap; type: string_map_multi_byref_const
  std::multimap<CefString, CefString> headerMapMultimap;
  transfer_string_multimap_contents(headerMap, headerMapMultimap);

  // Execute
  CefRequestCppToC::Get(self)->Set(CefString(url), CefString(method),
                                   CefPostDataCppToC::Unwrap(postData),
                                   headerMapMultimap);
}

int CEF_CALLBACK request_get_flags(struct _cef_request_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return UR_FLAG_NONE;

  // Execute
  int _retval = CefRequestCppToC::Get(self)->GetFlags();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK request_set_flags(struct _cef_request_t* self, int flags) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefRequestCppToC::Get(self)->SetFlags(flags);
}

cef_string_userfree_t CEF_CALLBACK
request_get_first_party_for_cookies(struct _cef_request_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefRequestCppToC::Get(self)->GetFirstPartyForCookies();

  // Return type: string
  return _retval.DetachToUserFree();
}

void CEF_CALLBACK
request_set_first_party_for_cookies(struct _cef_request_t* self,
                                    const cef_string_t* url) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Unverified params: url

  // Execute
  CefRequestCppToC::Get(self)->SetFirstPartyForCookies(CefString(url));
}

cef_resource_type_t CEF_CALLBACK
request_get_resource_type(struct _cef_request_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return RT_SUB_RESOURCE;

  // Execute
  cef_resource_type_t _retval = CefRequestCppToC::Get(self)->GetResourceType();

  // Return type: simple
  return _retval;
}

cef_transition_type_t CEF_CALLBACK
request_get_transition_type(struct _cef_request_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return TT_EXPLICIT;

  // Execute
  cef_transition_type_t _retval =
      CefRequestCppToC::Get(self)->GetTransitionType();

  // Return type: simple
  return _retval;
}

uint64 CEF_CALLBACK request_get_identifier(struct _cef_request_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  uint64 _retval = CefRequestCppToC::Get(self)->GetIdentifier();

  // Return type: simple
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefRequestCppToC::CefRequestCppToC() {
  GetStruct()->is_read_only = request_is_read_only;
  GetStruct()->get_url = request_get_url;
  GetStruct()->set_url = request_set_url;
  GetStruct()->get_method = request_get_method;
  GetStruct()->set_method = request_set_method;
  GetStruct()->set_referrer = request_set_referrer;
  GetStruct()->get_referrer_url = request_get_referrer_url;
  GetStruct()->get_referrer_policy = request_get_referrer_policy;
  GetStruct()->get_post_data = request_get_post_data;
  GetStruct()->set_post_data = request_set_post_data;
  GetStruct()->get_header_map = request_get_header_map;
  GetStruct()->set_header_map = request_set_header_map;
  GetStruct()->get_header_by_name = request_get_header_by_name;
  GetStruct()->set_header_by_name = request_set_header_by_name;
  GetStruct()->set = request_set;
  GetStruct()->get_flags = request_get_flags;
  GetStruct()->set_flags = request_set_flags;
  GetStruct()->get_first_party_for_cookies =
      request_get_first_party_for_cookies;
  GetStruct()->set_first_party_for_cookies =
      request_set_first_party_for_cookies;
  GetStruct()->get_resource_type = request_get_resource_type;
  GetStruct()->get_transition_type = request_get_transition_type;
  GetStruct()->get_identifier = request_get_identifier;
}

// DESTRUCTOR - Do not edit by hand.

CefRequestCppToC::~CefRequestCppToC() {}

template <>
CefRefPtr<CefRequest>
CefCppToCRefCounted<CefRequestCppToC, CefRequest, cef_request_t>::UnwrapDerived(
    CefWrapperType type,
    cef_request_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefRequestCppToC,
                                   CefRequest,
                                   cef_request_t>::kWrapperType = WT_REQUEST;
