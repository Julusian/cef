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
// $hash=80621c9fcd1e112984ddb490da40034e9731d530$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_VALUE_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_VALUE_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_values_capi.h"
#include "include/cef_values.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefValueCToCpp
    : public CefCToCppRefCounted<CefValueCToCpp, CefValue, cef_value_t> {
 public:
  CefValueCToCpp();
  virtual ~CefValueCToCpp();

  // CefValue methods.
  bool IsValid() override;
  bool IsOwned() override;
  bool IsReadOnly() override;
  bool IsSame(CefRefPtr<CefValue> that) override;
  bool IsEqual(CefRefPtr<CefValue> that) override;
  CefRefPtr<CefValue> Copy() override;
  CefValueType GetType() override;
  bool GetBool() override;
  int GetInt() override;
  double GetDouble() override;
  CefString GetString() override;
  CefRefPtr<CefBinaryValue> GetBinary() override;
  CefRefPtr<CefDictionaryValue> GetDictionary() override;
  CefRefPtr<CefListValue> GetList() override;
  bool SetNull() override;
  bool SetBool(bool value) override;
  bool SetInt(int value) override;
  bool SetDouble(double value) override;
  bool SetString(const CefString& value) override;
  bool SetBinary(CefRefPtr<CefBinaryValue> value) override;
  bool SetDictionary(CefRefPtr<CefDictionaryValue> value) override;
  bool SetList(CefRefPtr<CefListValue> value) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_VALUE_CTOCPP_H_
