#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_NavStateFunc {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BrowserNative_NavStateFunc__Class** type_info;
        inline app::BrowserNative_NavStateFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_NavStateFunc__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "NavStateFunc");
        }
        inline app::BrowserNative_NavStateFunc* create() {
            return il2cpp::create_object<app::BrowserNative_NavStateFunc>(get_class());
        }
    } // namespace BrowserNative_NavStateFunc
} // namespace app::classes::types
