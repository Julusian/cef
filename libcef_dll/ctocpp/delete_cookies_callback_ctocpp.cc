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
// $hash=55be7ac3ac6c4e07af7c20c920c6c83b7d0a25d3$
//

#include "libcef_dll/ctocpp/delete_cookies_callback_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefDeleteCookiesCallbackCToCpp::OnComplete(int num_deleted) {
  shutdown_checker::AssertNotShutdown();

  cef_delete_cookies_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_complete))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->on_complete(_struct, num_deleted);
}

// CONSTRUCTOR - Do not edit by hand.

CefDeleteCookiesCallbackCToCpp::CefDeleteCookiesCallbackCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefDeleteCookiesCallbackCToCpp::~CefDeleteCookiesCallbackCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_delete_cookies_callback_t* CefCToCppRefCounted<
    CefDeleteCookiesCallbackCToCpp,
    CefDeleteCookiesCallback,
    cef_delete_cookies_callback_t>::UnwrapDerived(CefWrapperType type,
                                                  CefDeleteCookiesCallback* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCToCppRefCounted<CefDeleteCookiesCallbackCToCpp,
                        CefDeleteCookiesCallback,
                        cef_delete_cookies_callback_t>::kWrapperType =
        WT_DELETE_COOKIES_CALLBACK;
