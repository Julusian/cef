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
// $hash=11fbbb5b1de3f96d332ec3653780826677ffcdf2$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_V8INTERCEPTOR_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_V8INTERCEPTOR_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_v8_capi.h"
#include "include/cef_v8.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefV8InterceptorCToCpp
    : public CefCToCppRefCounted<CefV8InterceptorCToCpp,
                                 CefV8Interceptor,
                                 cef_v8interceptor_t> {
 public:
  CefV8InterceptorCToCpp();
  virtual ~CefV8InterceptorCToCpp();

  // CefV8Interceptor methods.
  bool Get(const CefString& name,
           const CefRefPtr<CefV8Value> object,
           CefRefPtr<CefV8Value>& retval,
           CefString& exception) override;
  bool Get(int index,
           const CefRefPtr<CefV8Value> object,
           CefRefPtr<CefV8Value>& retval,
           CefString& exception) override;
  bool Set(const CefString& name,
           const CefRefPtr<CefV8Value> object,
           const CefRefPtr<CefV8Value> value,
           CefString& exception) override;
  bool Set(int index,
           const CefRefPtr<CefV8Value> object,
           const CefRefPtr<CefV8Value> value,
           CefString& exception) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_V8INTERCEPTOR_CTOCPP_H_
