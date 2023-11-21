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
// $hash=f7d0cf26743b3559f4e826452f3cb2c561dd75d1$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_MENU_MODEL_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_MENU_MODEL_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_menu_model_capi.h"
#include "include/cef_menu_model.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefMenuModelCToCpp : public CefCToCppRefCounted<CefMenuModelCToCpp,
                                                      CefMenuModel,
                                                      cef_menu_model_t> {
 public:
  CefMenuModelCToCpp();
  virtual ~CefMenuModelCToCpp();

  // CefMenuModel methods.
  bool IsSubMenu() override;
  bool Clear() override;
  int GetCount() override;
  bool AddSeparator() override;
  bool AddItem(int command_id, const CefString& label) override;
  bool AddCheckItem(int command_id, const CefString& label) override;
  bool AddRadioItem(int command_id,
                    const CefString& label,
                    int group_id) override;
  CefRefPtr<CefMenuModel> AddSubMenu(int command_id,
                                     const CefString& label) override;
  bool InsertSeparatorAt(int index) override;
  bool InsertItemAt(int index, int command_id, const CefString& label) override;
  bool InsertCheckItemAt(int index,
                         int command_id,
                         const CefString& label) override;
  bool InsertRadioItemAt(int index,
                         int command_id,
                         const CefString& label,
                         int group_id) override;
  CefRefPtr<CefMenuModel> InsertSubMenuAt(int index,
                                          int command_id,
                                          const CefString& label) override;
  bool Remove(int command_id) override;
  bool RemoveAt(int index) override;
  int GetIndexOf(int command_id) override;
  int GetCommandIdAt(int index) override;
  bool SetCommandIdAt(int index, int command_id) override;
  CefString GetLabel(int command_id) override;
  CefString GetLabelAt(int index) override;
  bool SetLabel(int command_id, const CefString& label) override;
  bool SetLabelAt(int index, const CefString& label) override;
  MenuItemType GetType(int command_id) override;
  MenuItemType GetTypeAt(int index) override;
  int GetGroupId(int command_id) override;
  int GetGroupIdAt(int index) override;
  bool SetGroupId(int command_id, int group_id) override;
  bool SetGroupIdAt(int index, int group_id) override;
  CefRefPtr<CefMenuModel> GetSubMenu(int command_id) override;
  CefRefPtr<CefMenuModel> GetSubMenuAt(int index) override;
  bool IsVisible(int command_id) override;
  bool IsVisibleAt(int index) override;
  bool SetVisible(int command_id, bool visible) override;
  bool SetVisibleAt(int index, bool visible) override;
  bool IsEnabled(int command_id) override;
  bool IsEnabledAt(int index) override;
  bool SetEnabled(int command_id, bool enabled) override;
  bool SetEnabledAt(int index, bool enabled) override;
  bool IsChecked(int command_id) override;
  bool IsCheckedAt(int index) override;
  bool SetChecked(int command_id, bool checked) override;
  bool SetCheckedAt(int index, bool checked) override;
  bool HasAccelerator(int command_id) override;
  bool HasAcceleratorAt(int index) override;
  bool SetAccelerator(int command_id,
                      int key_code,
                      bool shift_pressed,
                      bool ctrl_pressed,
                      bool alt_pressed) override;
  bool SetAcceleratorAt(int index,
                        int key_code,
                        bool shift_pressed,
                        bool ctrl_pressed,
                        bool alt_pressed) override;
  bool RemoveAccelerator(int command_id) override;
  bool RemoveAcceleratorAt(int index) override;
  bool GetAccelerator(int command_id,
                      int& key_code,
                      bool& shift_pressed,
                      bool& ctrl_pressed,
                      bool& alt_pressed) override;
  bool GetAcceleratorAt(int index,
                        int& key_code,
                        bool& shift_pressed,
                        bool& ctrl_pressed,
                        bool& alt_pressed) override;
  bool SetColor(int command_id,
                cef_menu_color_type_t color_type,
                cef_color_t color) override;
  bool SetColorAt(int index,
                  cef_menu_color_type_t color_type,
                  cef_color_t color) override;
  bool GetColor(int command_id,
                cef_menu_color_type_t color_type,
                cef_color_t& color) override;
  bool GetColorAt(int index,
                  cef_menu_color_type_t color_type,
                  cef_color_t& color) override;
  bool SetFontList(int command_id, const CefString& font_list) override;
  bool SetFontListAt(int index, const CefString& font_list) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_MENU_MODEL_CTOCPP_H_
