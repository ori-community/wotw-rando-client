#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BrowserNative_c__Class** type_info;
        inline app::BrowserNative_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_c__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "<>c");
        }
        inline app::BrowserNative_c* create() {
            return il2cpp::create_object<app::BrowserNative_c>(get_class());
        }
    } // namespace BrowserNative_c
} // namespace app::classes::types
