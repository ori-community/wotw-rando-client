#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserNative_Calltype_zfb_clearCookies {
        namespace {
            inline app::BrowserNative_Calltype_zfb_clearCookies__Class* type_info_ref = nullptr;
        }
        inline app::BrowserNative_Calltype_zfb_clearCookies__Class** type_info = &type_info_ref;
        inline app::BrowserNative_Calltype_zfb_clearCookies__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_Calltype_zfb_clearCookies__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "Calltype_zfb_clearCookies");
        }
        inline app::BrowserNative_Calltype_zfb_clearCookies* create() {
            return il2cpp::create_object<app::BrowserNative_Calltype_zfb_clearCookies>(get_class());
        }
    } // namespace BrowserNative_Calltype_zfb_clearCookies
} // namespace app::classes::types
