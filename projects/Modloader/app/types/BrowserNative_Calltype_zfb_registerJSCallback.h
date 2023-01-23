#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_registerJSCallback__Class.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_registerJSCallback.h>

namespace app::classes::types {
    namespace BrowserNative_Calltype_zfb_registerJSCallback {
        namespace {
            inline app::BrowserNative_Calltype_zfb_registerJSCallback__Class* type_info_ref = nullptr;
        }
        inline app::BrowserNative_Calltype_zfb_registerJSCallback__Class** type_info = &type_info_ref;
        inline app::BrowserNative_Calltype_zfb_registerJSCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_Calltype_zfb_registerJSCallback__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "Calltype_zfb_registerJSCallback");
        }
        inline app::BrowserNative_Calltype_zfb_registerJSCallback* create() {
            return il2cpp::create_object<app::BrowserNative_Calltype_zfb_registerJSCallback>(get_class());
        }
    } // namespace BrowserNative_Calltype_zfb_registerJSCallback
} // namespace app::classes::types
