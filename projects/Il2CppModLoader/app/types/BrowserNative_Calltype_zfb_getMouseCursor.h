#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_Calltype_zfb_getMouseCursor {
        namespace {
            app::BrowserNative_Calltype_zfb_getMouseCursor__Class* type_info_ref = nullptr;
        }
        app::BrowserNative_Calltype_zfb_getMouseCursor__Class** type_info = &type_info_ref;
        inline app::BrowserNative_Calltype_zfb_getMouseCursor__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_Calltype_zfb_getMouseCursor__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "Calltype_zfb_getMouseCursor");
        }
        inline app::BrowserNative_Calltype_zfb_getMouseCursor* create() {
            return il2cpp::create_object<app::BrowserNative_Calltype_zfb_getMouseCursor>(get_class());
        }
    } // namespace BrowserNative_Calltype_zfb_getMouseCursor
} // namespace app::classes::types
