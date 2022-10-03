#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_NewWindowFunc {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BrowserNative_NewWindowFunc__Class** type_info;
        inline app::BrowserNative_NewWindowFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_NewWindowFunc__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "NewWindowFunc");
        }
        inline app::BrowserNative_NewWindowFunc* create() {
            return il2cpp::create_object<app::BrowserNative_NewWindowFunc>(get_class());
        }
    } // namespace BrowserNative_NewWindowFunc
} // namespace app::classes::types
