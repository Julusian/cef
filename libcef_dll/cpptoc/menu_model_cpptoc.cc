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
// $hash=d5b8daec5b6d6a6632d664143e27361425c00212$
//

#include "libcef_dll/cpptoc/menu_model_cpptoc.h"
#include "libcef_dll/ctocpp/menu_model_delegate_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_menu_model_t* cef_menu_model_create(
    struct _cef_menu_model_delegate_t* delegate) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: delegate; type: refptr_diff
  DCHECK(delegate);
  if (!delegate)
    return NULL;

  // Execute
  CefRefPtr<CefMenuModel> _retval =
      CefMenuModel::CreateMenuModel(CefMenuModelDelegateCToCpp::Wrap(delegate));

  // Return type: refptr_same
  return CefMenuModelCppToC::Wrap(_retval);
}

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK menu_model_is_sub_menu(struct _cef_menu_model_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->IsSubMenu();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_clear(struct _cef_menu_model_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->Clear();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_get_count(struct _cef_menu_model_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefMenuModelCppToC::Get(self)->GetCount();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK menu_model_add_separator(struct _cef_menu_model_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->AddSeparator();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_add_item(struct _cef_menu_model_t* self,
                                     int command_id,
                                     const cef_string_t* label) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: label; type: string_byref_const
  DCHECK(label);
  if (!label)
    return 0;

  // Execute
  bool _retval =
      CefMenuModelCppToC::Get(self)->AddItem(command_id, CefString(label));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_add_check_item(struct _cef_menu_model_t* self,
                                           int command_id,
                                           const cef_string_t* label) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: label; type: string_byref_const
  DCHECK(label);
  if (!label)
    return 0;

  // Execute
  bool _retval =
      CefMenuModelCppToC::Get(self)->AddCheckItem(command_id, CefString(label));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_add_radio_item(struct _cef_menu_model_t* self,
                                           int command_id,
                                           const cef_string_t* label,
                                           int group_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: label; type: string_byref_const
  DCHECK(label);
  if (!label)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->AddRadioItem(
      command_id, CefString(label), group_id);

  // Return type: bool
  return _retval;
}

struct _cef_menu_model_t* CEF_CALLBACK
menu_model_add_sub_menu(struct _cef_menu_model_t* self,
                        int command_id,
                        const cef_string_t* label) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;
  // Verify param: label; type: string_byref_const
  DCHECK(label);
  if (!label)
    return NULL;

  // Execute
  CefRefPtr<CefMenuModel> _retval =
      CefMenuModelCppToC::Get(self)->AddSubMenu(command_id, CefString(label));

  // Return type: refptr_same
  return CefMenuModelCppToC::Wrap(_retval);
}

int CEF_CALLBACK menu_model_insert_separator_at(struct _cef_menu_model_t* self,
                                                int index) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->InsertSeparatorAt(index);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_insert_item_at(struct _cef_menu_model_t* self,
                                           int index,
                                           int command_id,
                                           const cef_string_t* label) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: label; type: string_byref_const
  DCHECK(label);
  if (!label)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->InsertItemAt(index, command_id,
                                                             CefString(label));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_insert_check_item_at(struct _cef_menu_model_t* self,
                                                 int index,
                                                 int command_id,
                                                 const cef_string_t* label) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: label; type: string_byref_const
  DCHECK(label);
  if (!label)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->InsertCheckItemAt(
      index, command_id, CefString(label));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_insert_radio_item_at(struct _cef_menu_model_t* self,
                                                 int index,
                                                 int command_id,
                                                 const cef_string_t* label,
                                                 int group_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: label; type: string_byref_const
  DCHECK(label);
  if (!label)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->InsertRadioItemAt(
      index, command_id, CefString(label), group_id);

  // Return type: bool
  return _retval;
}

struct _cef_menu_model_t* CEF_CALLBACK
menu_model_insert_sub_menu_at(struct _cef_menu_model_t* self,
                              int index,
                              int command_id,
                              const cef_string_t* label) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;
  // Verify param: label; type: string_byref_const
  DCHECK(label);
  if (!label)
    return NULL;

  // Execute
  CefRefPtr<CefMenuModel> _retval =
      CefMenuModelCppToC::Get(self)->InsertSubMenuAt(index, command_id,
                                                     CefString(label));

  // Return type: refptr_same
  return CefMenuModelCppToC::Wrap(_retval);
}

int CEF_CALLBACK menu_model_remove(struct _cef_menu_model_t* self,
                                   int command_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->Remove(command_id);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_remove_at(struct _cef_menu_model_t* self,
                                      int index) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->RemoveAt(index);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_get_index_of(struct _cef_menu_model_t* self,
                                         int command_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefMenuModelCppToC::Get(self)->GetIndexOf(command_id);

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK menu_model_get_command_id_at(struct _cef_menu_model_t* self,
                                              int index) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefMenuModelCppToC::Get(self)->GetCommandIdAt(index);

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK menu_model_set_command_id_at(struct _cef_menu_model_t* self,
                                              int index,
                                              int command_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval =
      CefMenuModelCppToC::Get(self)->SetCommandIdAt(index, command_id);

  // Return type: bool
  return _retval;
}

cef_string_userfree_t CEF_CALLBACK
menu_model_get_label(struct _cef_menu_model_t* self, int command_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefMenuModelCppToC::Get(self)->GetLabel(command_id);

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK
menu_model_get_label_at(struct _cef_menu_model_t* self, int index) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefMenuModelCppToC::Get(self)->GetLabelAt(index);

  // Return type: string
  return _retval.DetachToUserFree();
}

int CEF_CALLBACK menu_model_set_label(struct _cef_menu_model_t* self,
                                      int command_id,
                                      const cef_string_t* label) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: label; type: string_byref_const
  DCHECK(label);
  if (!label)
    return 0;

  // Execute
  bool _retval =
      CefMenuModelCppToC::Get(self)->SetLabel(command_id, CefString(label));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_set_label_at(struct _cef_menu_model_t* self,
                                         int index,
                                         const cef_string_t* label) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: label; type: string_byref_const
  DCHECK(label);
  if (!label)
    return 0;

  // Execute
  bool _retval =
      CefMenuModelCppToC::Get(self)->SetLabelAt(index, CefString(label));

  // Return type: bool
  return _retval;
}

cef_menu_item_type_t CEF_CALLBACK
menu_model_get_type(struct _cef_menu_model_t* self, int command_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return MENUITEMTYPE_NONE;

  // Execute
  cef_menu_item_type_t _retval =
      CefMenuModelCppToC::Get(self)->GetType(command_id);

  // Return type: simple
  return _retval;
}

cef_menu_item_type_t CEF_CALLBACK
menu_model_get_type_at(struct _cef_menu_model_t* self, int index) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return MENUITEMTYPE_NONE;

  // Execute
  cef_menu_item_type_t _retval =
      CefMenuModelCppToC::Get(self)->GetTypeAt(index);

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK menu_model_get_group_id(struct _cef_menu_model_t* self,
                                         int command_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefMenuModelCppToC::Get(self)->GetGroupId(command_id);

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK menu_model_get_group_id_at(struct _cef_menu_model_t* self,
                                            int index) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefMenuModelCppToC::Get(self)->GetGroupIdAt(index);

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK menu_model_set_group_id(struct _cef_menu_model_t* self,
                                         int command_id,
                                         int group_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval =
      CefMenuModelCppToC::Get(self)->SetGroupId(command_id, group_id);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_set_group_id_at(struct _cef_menu_model_t* self,
                                            int index,
                                            int group_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->SetGroupIdAt(index, group_id);

  // Return type: bool
  return _retval;
}

struct _cef_menu_model_t* CEF_CALLBACK
menu_model_get_sub_menu(struct _cef_menu_model_t* self, int command_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefMenuModel> _retval =
      CefMenuModelCppToC::Get(self)->GetSubMenu(command_id);

  // Return type: refptr_same
  return CefMenuModelCppToC::Wrap(_retval);
}

struct _cef_menu_model_t* CEF_CALLBACK
menu_model_get_sub_menu_at(struct _cef_menu_model_t* self, int index) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefMenuModel> _retval =
      CefMenuModelCppToC::Get(self)->GetSubMenuAt(index);

  // Return type: refptr_same
  return CefMenuModelCppToC::Wrap(_retval);
}

int CEF_CALLBACK menu_model_is_visible(struct _cef_menu_model_t* self,
                                       int command_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->IsVisible(command_id);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_is_visible_at(struct _cef_menu_model_t* self,
                                          int index) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->IsVisibleAt(index);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_set_visible(struct _cef_menu_model_t* self,
                                        int command_id,
                                        int visible) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->SetVisible(
      command_id, visible ? true : false);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_set_visible_at(struct _cef_menu_model_t* self,
                                           int index,
                                           int visible) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->SetVisibleAt(
      index, visible ? true : false);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_is_enabled(struct _cef_menu_model_t* self,
                                       int command_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->IsEnabled(command_id);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_is_enabled_at(struct _cef_menu_model_t* self,
                                          int index) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->IsEnabledAt(index);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_set_enabled(struct _cef_menu_model_t* self,
                                        int command_id,
                                        int enabled) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->SetEnabled(
      command_id, enabled ? true : false);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_set_enabled_at(struct _cef_menu_model_t* self,
                                           int index,
                                           int enabled) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->SetEnabledAt(
      index, enabled ? true : false);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_is_checked(struct _cef_menu_model_t* self,
                                       int command_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->IsChecked(command_id);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_is_checked_at(struct _cef_menu_model_t* self,
                                          int index) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->IsCheckedAt(index);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_set_checked(struct _cef_menu_model_t* self,
                                        int command_id,
                                        int checked) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->SetChecked(
      command_id, checked ? true : false);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_set_checked_at(struct _cef_menu_model_t* self,
                                           int index,
                                           int checked) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->SetCheckedAt(
      index, checked ? true : false);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_has_accelerator(struct _cef_menu_model_t* self,
                                            int command_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->HasAccelerator(command_id);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_has_accelerator_at(struct _cef_menu_model_t* self,
                                               int index) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->HasAcceleratorAt(index);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_set_accelerator(struct _cef_menu_model_t* self,
                                            int command_id,
                                            int key_code,
                                            int shift_pressed,
                                            int ctrl_pressed,
                                            int alt_pressed) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->SetAccelerator(
      command_id, key_code, shift_pressed ? true : false,
      ctrl_pressed ? true : false, alt_pressed ? true : false);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_set_accelerator_at(struct _cef_menu_model_t* self,
                                               int index,
                                               int key_code,
                                               int shift_pressed,
                                               int ctrl_pressed,
                                               int alt_pressed) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->SetAcceleratorAt(
      index, key_code, shift_pressed ? true : false,
      ctrl_pressed ? true : false, alt_pressed ? true : false);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_remove_accelerator(struct _cef_menu_model_t* self,
                                               int command_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->RemoveAccelerator(command_id);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
menu_model_remove_accelerator_at(struct _cef_menu_model_t* self, int index) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->RemoveAcceleratorAt(index);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_get_accelerator(struct _cef_menu_model_t* self,
                                            int command_id,
                                            int* key_code,
                                            int* shift_pressed,
                                            int* ctrl_pressed,
                                            int* alt_pressed) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: key_code; type: simple_byref
  DCHECK(key_code);
  if (!key_code)
    return 0;
  // Verify param: shift_pressed; type: bool_byref
  DCHECK(shift_pressed);
  if (!shift_pressed)
    return 0;
  // Verify param: ctrl_pressed; type: bool_byref
  DCHECK(ctrl_pressed);
  if (!ctrl_pressed)
    return 0;
  // Verify param: alt_pressed; type: bool_byref
  DCHECK(alt_pressed);
  if (!alt_pressed)
    return 0;

  // Translate param: key_code; type: simple_byref
  int key_codeVal = key_code ? *key_code : 0;
  // Translate param: shift_pressed; type: bool_byref
  bool shift_pressedBool = (shift_pressed && *shift_pressed) ? true : false;
  // Translate param: ctrl_pressed; type: bool_byref
  bool ctrl_pressedBool = (ctrl_pressed && *ctrl_pressed) ? true : false;
  // Translate param: alt_pressed; type: bool_byref
  bool alt_pressedBool = (alt_pressed && *alt_pressed) ? true : false;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->GetAccelerator(
      command_id, key_codeVal, shift_pressedBool, ctrl_pressedBool,
      alt_pressedBool);

  // Restore param: key_code; type: simple_byref
  if (key_code)
    *key_code = key_codeVal;
  // Restore param: shift_pressed; type: bool_byref
  if (shift_pressed)
    *shift_pressed = shift_pressedBool ? true : false;
  // Restore param: ctrl_pressed; type: bool_byref
  if (ctrl_pressed)
    *ctrl_pressed = ctrl_pressedBool ? true : false;
  // Restore param: alt_pressed; type: bool_byref
  if (alt_pressed)
    *alt_pressed = alt_pressedBool ? true : false;

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_get_accelerator_at(struct _cef_menu_model_t* self,
                                               int index,
                                               int* key_code,
                                               int* shift_pressed,
                                               int* ctrl_pressed,
                                               int* alt_pressed) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: key_code; type: simple_byref
  DCHECK(key_code);
  if (!key_code)
    return 0;
  // Verify param: shift_pressed; type: bool_byref
  DCHECK(shift_pressed);
  if (!shift_pressed)
    return 0;
  // Verify param: ctrl_pressed; type: bool_byref
  DCHECK(ctrl_pressed);
  if (!ctrl_pressed)
    return 0;
  // Verify param: alt_pressed; type: bool_byref
  DCHECK(alt_pressed);
  if (!alt_pressed)
    return 0;

  // Translate param: key_code; type: simple_byref
  int key_codeVal = key_code ? *key_code : 0;
  // Translate param: shift_pressed; type: bool_byref
  bool shift_pressedBool = (shift_pressed && *shift_pressed) ? true : false;
  // Translate param: ctrl_pressed; type: bool_byref
  bool ctrl_pressedBool = (ctrl_pressed && *ctrl_pressed) ? true : false;
  // Translate param: alt_pressed; type: bool_byref
  bool alt_pressedBool = (alt_pressed && *alt_pressed) ? true : false;

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->GetAcceleratorAt(
      index, key_codeVal, shift_pressedBool, ctrl_pressedBool, alt_pressedBool);

  // Restore param: key_code; type: simple_byref
  if (key_code)
    *key_code = key_codeVal;
  // Restore param: shift_pressed; type: bool_byref
  if (shift_pressed)
    *shift_pressed = shift_pressedBool ? true : false;
  // Restore param: ctrl_pressed; type: bool_byref
  if (ctrl_pressed)
    *ctrl_pressed = ctrl_pressedBool ? true : false;
  // Restore param: alt_pressed; type: bool_byref
  if (alt_pressed)
    *alt_pressed = alt_pressedBool ? true : false;

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_set_color(struct _cef_menu_model_t* self,
                                      int command_id,
                                      cef_menu_color_type_t color_type,
                                      cef_color_t color) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval =
      CefMenuModelCppToC::Get(self)->SetColor(command_id, color_type, color);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_set_color_at(struct _cef_menu_model_t* self,
                                         int index,
                                         cef_menu_color_type_t color_type,
                                         cef_color_t color) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval =
      CefMenuModelCppToC::Get(self)->SetColorAt(index, color_type, color);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_get_color(struct _cef_menu_model_t* self,
                                      int command_id,
                                      cef_menu_color_type_t color_type,
                                      cef_color_t* color) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: color; type: simple_byref
  DCHECK(color);
  if (!color)
    return 0;

  // Translate param: color; type: simple_byref
  cef_color_t colorVal = color ? *color : 0;

  // Execute
  bool _retval =
      CefMenuModelCppToC::Get(self)->GetColor(command_id, color_type, colorVal);

  // Restore param: color; type: simple_byref
  if (color)
    *color = colorVal;

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_get_color_at(struct _cef_menu_model_t* self,
                                         int index,
                                         cef_menu_color_type_t color_type,
                                         cef_color_t* color) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: color; type: simple_byref
  DCHECK(color);
  if (!color)
    return 0;

  // Translate param: color; type: simple_byref
  cef_color_t colorVal = color ? *color : 0;

  // Execute
  bool _retval =
      CefMenuModelCppToC::Get(self)->GetColorAt(index, color_type, colorVal);

  // Restore param: color; type: simple_byref
  if (color)
    *color = colorVal;

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_set_font_list(struct _cef_menu_model_t* self,
                                          int command_id,
                                          const cef_string_t* font_list) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Unverified params: font_list

  // Execute
  bool _retval = CefMenuModelCppToC::Get(self)->SetFontList(
      command_id, CefString(font_list));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK menu_model_set_font_list_at(struct _cef_menu_model_t* self,
                                             int index,
                                             const cef_string_t* font_list) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Unverified params: font_list

  // Execute
  bool _retval =
      CefMenuModelCppToC::Get(self)->SetFontListAt(index, CefString(font_list));

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefMenuModelCppToC::CefMenuModelCppToC() {
  GetStruct()->is_sub_menu = menu_model_is_sub_menu;
  GetStruct()->clear = menu_model_clear;
  GetStruct()->get_count = menu_model_get_count;
  GetStruct()->add_separator = menu_model_add_separator;
  GetStruct()->add_item = menu_model_add_item;
  GetStruct()->add_check_item = menu_model_add_check_item;
  GetStruct()->add_radio_item = menu_model_add_radio_item;
  GetStruct()->add_sub_menu = menu_model_add_sub_menu;
  GetStruct()->insert_separator_at = menu_model_insert_separator_at;
  GetStruct()->insert_item_at = menu_model_insert_item_at;
  GetStruct()->insert_check_item_at = menu_model_insert_check_item_at;
  GetStruct()->insert_radio_item_at = menu_model_insert_radio_item_at;
  GetStruct()->insert_sub_menu_at = menu_model_insert_sub_menu_at;
  GetStruct()->remove = menu_model_remove;
  GetStruct()->remove_at = menu_model_remove_at;
  GetStruct()->get_index_of = menu_model_get_index_of;
  GetStruct()->get_command_id_at = menu_model_get_command_id_at;
  GetStruct()->set_command_id_at = menu_model_set_command_id_at;
  GetStruct()->get_label = menu_model_get_label;
  GetStruct()->get_label_at = menu_model_get_label_at;
  GetStruct()->set_label = menu_model_set_label;
  GetStruct()->set_label_at = menu_model_set_label_at;
  GetStruct()->get_type = menu_model_get_type;
  GetStruct()->get_type_at = menu_model_get_type_at;
  GetStruct()->get_group_id = menu_model_get_group_id;
  GetStruct()->get_group_id_at = menu_model_get_group_id_at;
  GetStruct()->set_group_id = menu_model_set_group_id;
  GetStruct()->set_group_id_at = menu_model_set_group_id_at;
  GetStruct()->get_sub_menu = menu_model_get_sub_menu;
  GetStruct()->get_sub_menu_at = menu_model_get_sub_menu_at;
  GetStruct()->is_visible = menu_model_is_visible;
  GetStruct()->is_visible_at = menu_model_is_visible_at;
  GetStruct()->set_visible = menu_model_set_visible;
  GetStruct()->set_visible_at = menu_model_set_visible_at;
  GetStruct()->is_enabled = menu_model_is_enabled;
  GetStruct()->is_enabled_at = menu_model_is_enabled_at;
  GetStruct()->set_enabled = menu_model_set_enabled;
  GetStruct()->set_enabled_at = menu_model_set_enabled_at;
  GetStruct()->is_checked = menu_model_is_checked;
  GetStruct()->is_checked_at = menu_model_is_checked_at;
  GetStruct()->set_checked = menu_model_set_checked;
  GetStruct()->set_checked_at = menu_model_set_checked_at;
  GetStruct()->has_accelerator = menu_model_has_accelerator;
  GetStruct()->has_accelerator_at = menu_model_has_accelerator_at;
  GetStruct()->set_accelerator = menu_model_set_accelerator;
  GetStruct()->set_accelerator_at = menu_model_set_accelerator_at;
  GetStruct()->remove_accelerator = menu_model_remove_accelerator;
  GetStruct()->remove_accelerator_at = menu_model_remove_accelerator_at;
  GetStruct()->get_accelerator = menu_model_get_accelerator;
  GetStruct()->get_accelerator_at = menu_model_get_accelerator_at;
  GetStruct()->set_color = menu_model_set_color;
  GetStruct()->set_color_at = menu_model_set_color_at;
  GetStruct()->get_color = menu_model_get_color;
  GetStruct()->get_color_at = menu_model_get_color_at;
  GetStruct()->set_font_list = menu_model_set_font_list;
  GetStruct()->set_font_list_at = menu_model_set_font_list_at;
}

// DESTRUCTOR - Do not edit by hand.

CefMenuModelCppToC::~CefMenuModelCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefMenuModel>
CefCppToCRefCounted<CefMenuModelCppToC, CefMenuModel, cef_menu_model_t>::
    UnwrapDerived(CefWrapperType type, cef_menu_model_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefMenuModelCppToC,
                                   CefMenuModel,
                                   cef_menu_model_t>::kWrapperType =
    WT_MENU_MODEL;
