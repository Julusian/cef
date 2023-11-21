// Copyright (c) 2023 Marshall A. Greenblatt. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//    * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//    * Neither the name of Google Inc. nor the name Chromium Embedded
// Framework nor the names of its contributors may be used to endorse
// or promote products derived from this software without specific prior
// written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool and should not edited
// by hand. See the translator.README.txt file in the tools directory for
// more information.
//
// $hash=3faf27fd1377ad64fe06aa30e69934b78102456e$
//

#ifndef CEF_INCLUDE_CAPI_VIEWS_CEF_TEXTFIELD_CAPI_H_
#define CEF_INCLUDE_CAPI_VIEWS_CEF_TEXTFIELD_CAPI_H_
#pragma once

#include "include/capi/views/cef_textfield_delegate_capi.h"
#include "include/capi/views/cef_view_capi.h"

#ifdef __cplusplus
extern "C" {
#endif

///
// A Textfield supports editing of text. This control is custom rendered with no
// platform-specific code. Methods must be called on the browser process UI
// thread unless otherwise indicated.
///
typedef struct _cef_textfield_t {
  ///
  // Base structure.
  ///
  cef_view_t base;

  ///
  // Sets whether the text will be displayed as asterisks.
  ///
  void(CEF_CALLBACK* set_password_input)(struct _cef_textfield_t* self,
                                         int password_input);

  ///
  // Returns true (1) if the text will be displayed as asterisks.
  ///
  int(CEF_CALLBACK* is_password_input)(struct _cef_textfield_t* self);

  ///
  // Sets whether the text will read-only.
  ///
  void(CEF_CALLBACK* set_read_only)(struct _cef_textfield_t* self,
                                    int read_only);

  ///
  // Returns true (1) if the text is read-only.
  ///
  int(CEF_CALLBACK* is_read_only)(struct _cef_textfield_t* self);

  ///
  // Returns the currently displayed text.
  ///
  // The resulting string must be freed by calling cef_string_userfree_free().
  cef_string_userfree_t(CEF_CALLBACK* get_text)(struct _cef_textfield_t* self);

  ///
  // Sets the contents to |text|. The cursor will be moved to end of the text if
  // the current position is outside of the text range.
  ///
  void(CEF_CALLBACK* set_text)(struct _cef_textfield_t* self,
                               const cef_string_t* text);

  ///
  // Appends |text| to the previously-existing text.
  ///
  void(CEF_CALLBACK* append_text)(struct _cef_textfield_t* self,
                                  const cef_string_t* text);

  ///
  // Inserts |text| at the current cursor position replacing any selected text.
  ///
  void(CEF_CALLBACK* insert_or_replace_text)(struct _cef_textfield_t* self,
                                             const cef_string_t* text);

  ///
  // Returns true (1) if there is any selected text.
  ///
  int(CEF_CALLBACK* has_selection)(struct _cef_textfield_t* self);

  ///
  // Returns the currently selected text.
  ///
  // The resulting string must be freed by calling cef_string_userfree_free().
  cef_string_userfree_t(CEF_CALLBACK* get_selected_text)(
      struct _cef_textfield_t* self);

  ///
  // Selects all text. If |reversed| is true (1) the range will end at the
  // logical beginning of the text; this generally shows the leading portion of
  // text that overflows its display area.
  ///
  void(CEF_CALLBACK* select_all)(struct _cef_textfield_t* self, int reversed);

  ///
  // Clears the text selection and sets the caret to the end.
  ///
  void(CEF_CALLBACK* clear_selection)(struct _cef_textfield_t* self);

  ///
  // Returns the selected logical text range.
  ///
  cef_range_t(CEF_CALLBACK* get_selected_range)(struct _cef_textfield_t* self);

  ///
  // Selects the specified logical text range.
  ///
  void(CEF_CALLBACK* select_range)(struct _cef_textfield_t* self,
                                   const cef_range_t* range);

  ///
  // Returns the current cursor position.
  ///
  size_t(CEF_CALLBACK* get_cursor_position)(struct _cef_textfield_t* self);

  ///
  // Sets the text color.
  ///
  void(CEF_CALLBACK* set_text_color)(struct _cef_textfield_t* self,
                                     cef_color_t color);

  ///
  // Returns the text color.
  ///
  cef_color_t(CEF_CALLBACK* get_text_color)(struct _cef_textfield_t* self);

  ///
  // Sets the selection text color.
  ///
  void(CEF_CALLBACK* set_selection_text_color)(struct _cef_textfield_t* self,
                                               cef_color_t color);

  ///
  // Returns the selection text color.
  ///
  cef_color_t(CEF_CALLBACK* get_selection_text_color)(
      struct _cef_textfield_t* self);

  ///
  // Sets the selection background color.
  ///
  void(CEF_CALLBACK* set_selection_background_color)(
      struct _cef_textfield_t* self,
      cef_color_t color);

  ///
  // Returns the selection background color.
  ///
  cef_color_t(CEF_CALLBACK* get_selection_background_color)(
      struct _cef_textfield_t* self);

  ///
  // Sets the font list. The format is "<FONT_FAMILY_LIST>,[STYLES] <SIZE>",
  // where: - FONT_FAMILY_LIST is a comma-separated list of font family names, -
  // STYLES is an optional space-separated list of style names (case-sensitive
  //   "Bold" and "Italic" are supported), and
  // - SIZE is an integer font size in pixels with the suffix "px".
  //
  // Here are examples of valid font description strings: - "Arial, Helvetica,
  // Bold Italic 14px" - "Arial, 14px"
  ///
  void(CEF_CALLBACK* set_font_list)(struct _cef_textfield_t* self,
                                    const cef_string_t* font_list);

  ///
  // Applies |color| to the specified |range| without changing the default
  // color. If |range| is NULL the color will be set on the complete text
  // contents.
  ///
  void(CEF_CALLBACK* apply_text_color)(struct _cef_textfield_t* self,
                                       cef_color_t color,
                                       const cef_range_t* range);

  ///
  // Applies |style| to the specified |range| without changing the default
  // style. If |add| is true (1) the style will be added, otherwise the style
  // will be removed. If |range| is NULL the style will be set on the complete
  // text contents.
  ///
  void(CEF_CALLBACK* apply_text_style)(struct _cef_textfield_t* self,
                                       cef_text_style_t style,
                                       int add,
                                       const cef_range_t* range);

  ///
  // Returns true (1) if the action associated with the specified command id is
  // enabled. See additional comments on execute_command().
  ///
  int(CEF_CALLBACK* is_command_enabled)(struct _cef_textfield_t* self,
                                        cef_text_field_commands_t command_id);

  ///
  // Performs the action associated with the specified command id.
  ///
  void(CEF_CALLBACK* execute_command)(struct _cef_textfield_t* self,
                                      cef_text_field_commands_t command_id);

  ///
  // Clears Edit history.
  ///
  void(CEF_CALLBACK* clear_edit_history)(struct _cef_textfield_t* self);

  ///
  // Sets the placeholder text that will be displayed when the Textfield is
  // NULL.
  ///
  void(CEF_CALLBACK* set_placeholder_text)(struct _cef_textfield_t* self,
                                           const cef_string_t* text);

  ///
  // Returns the placeholder text that will be displayed when the Textfield is
  // NULL.
  ///
  // The resulting string must be freed by calling cef_string_userfree_free().
  cef_string_userfree_t(CEF_CALLBACK* get_placeholder_text)(
      struct _cef_textfield_t* self);

  ///
  // Sets the placeholder text color.
  ///
  void(CEF_CALLBACK* set_placeholder_text_color)(struct _cef_textfield_t* self,
                                                 cef_color_t color);

  ///
  // Set the accessible name that will be exposed to assistive technology (AT).
  ///
  void(CEF_CALLBACK* set_accessible_name)(struct _cef_textfield_t* self,
                                          const cef_string_t* name);
} cef_textfield_t;

///
// Create a new Textfield.
///
CEF_EXPORT cef_textfield_t* cef_textfield_create(
    struct _cef_textfield_delegate_t* delegate);

#ifdef __cplusplus
}
#endif

#endif  // CEF_INCLUDE_CAPI_VIEWS_CEF_TEXTFIELD_CAPI_H_
