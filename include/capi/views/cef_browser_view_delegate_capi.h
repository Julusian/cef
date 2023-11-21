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
// $hash=ec5c49d383e69a87b525c6e1ec3e2c779db6ab78$
//

#ifndef CEF_INCLUDE_CAPI_VIEWS_CEF_BROWSER_VIEW_DELEGATE_CAPI_H_
#define CEF_INCLUDE_CAPI_VIEWS_CEF_BROWSER_VIEW_DELEGATE_CAPI_H_
#pragma once

#include "include/capi/cef_client_capi.h"
#include "include/capi/views/cef_view_delegate_capi.h"

#ifdef __cplusplus
extern "C" {
#endif

struct _cef_browser_t;
struct _cef_browser_view_t;

///
// Implement this structure to handle BrowserView events. The functions of this
// structure will be called on the browser process UI thread unless otherwise
// indicated.
///
typedef struct _cef_browser_view_delegate_t {
  ///
  // Base structure.
  ///
  cef_view_delegate_t base;

  ///
  // Called when |browser| associated with |browser_view| is created. This
  // function will be called after cef_life_span_handler_t::on_after_created()
  // is called for |browser| and before on_popup_browser_view_created() is
  // called for |browser|'s parent delegate if |browser| is a popup.
  ///
  void(CEF_CALLBACK* on_browser_created)(
      struct _cef_browser_view_delegate_t* self,
      struct _cef_browser_view_t* browser_view,
      struct _cef_browser_t* browser);

  ///
  // Called when |browser| associated with |browser_view| is destroyed. Release
  // all references to |browser| and do not attempt to execute any functions on
  // |browser| after this callback returns. This function will be called before
  // cef_life_span_handler_t::on_before_close() is called for |browser|.
  ///
  void(CEF_CALLBACK* on_browser_destroyed)(
      struct _cef_browser_view_delegate_t* self,
      struct _cef_browser_view_t* browser_view,
      struct _cef_browser_t* browser);

  ///
  // Called before a new popup BrowserView is created. The popup originated from
  // |browser_view|. |settings| and |client| are the values returned from
  // cef_life_span_handler_t::on_before_popup(). |is_devtools| will be true (1)
  // if the popup will be a DevTools browser. Return the delegate that will be
  // used for the new popup BrowserView.
  ///
  struct _cef_browser_view_delegate_t*(
      CEF_CALLBACK* get_delegate_for_popup_browser_view)(
      struct _cef_browser_view_delegate_t* self,
      struct _cef_browser_view_t* browser_view,
      const struct _cef_browser_settings_t* settings,
      struct _cef_client_t* client,
      int is_devtools);

  ///
  // Called after |popup_browser_view| is created. This function will be called
  // after cef_life_span_handler_t::on_after_created() and on_browser_created()
  // are called for the new popup browser. The popup originated from
  // |browser_view|. |is_devtools| will be true (1) if the popup is a DevTools
  // browser. Optionally add |popup_browser_view| to the views hierarchy
  // yourself and return true (1). Otherwise return false (0) and a default
  // cef_window_t will be created for the popup.
  ///
  int(CEF_CALLBACK* on_popup_browser_view_created)(
      struct _cef_browser_view_delegate_t* self,
      struct _cef_browser_view_t* browser_view,
      struct _cef_browser_view_t* popup_browser_view,
      int is_devtools);

  ///
  // Returns the Chrome toolbar type that will be available via
  // cef_browser_view_t::get_chrome_toolbar(). See that function for related
  // documentation.
  ///
  cef_chrome_toolbar_type_t(CEF_CALLBACK* get_chrome_toolbar_type)(
      struct _cef_browser_view_delegate_t* self);
} cef_browser_view_delegate_t;

#ifdef __cplusplus
}
#endif

#endif  // CEF_INCLUDE_CAPI_VIEWS_CEF_BROWSER_VIEW_DELEGATE_CAPI_H_
