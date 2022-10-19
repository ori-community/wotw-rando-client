#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserNative_Calltype_zfb_init {
        namespace {
            inline app::BrowserNative_Calltype_zfb_init__Class* type_info_ref = nullptr;
        }
        inline app::BrowserNative_Calltype_zfb_init__Class** type_info = &type_info_ref;
        inline app::BrowserNative_Calltype_zfb_init__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_Calltype_zfb_init__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "Calltype_zfb_init");
        }
        inline app::BrowserNative_Calltype_zfb_init* create() {
            return il2cpp::create_object<app::BrowserNative_Calltype_zfb_init>(get_class());
        }
    } // namespace BrowserNative_Calltype_zfb_init
} // namespace app::classes::types
