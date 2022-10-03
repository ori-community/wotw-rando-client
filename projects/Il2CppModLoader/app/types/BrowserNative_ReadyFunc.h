#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_ReadyFunc {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BrowserNative_ReadyFunc__Class** type_info;
        inline app::BrowserNative_ReadyFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_ReadyFunc__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "ReadyFunc");
        }
        inline app::BrowserNative_ReadyFunc* create() {
            return il2cpp::create_object<app::BrowserNative_ReadyFunc>(get_class());
        }
    } // namespace BrowserNative_ReadyFunc
} // namespace app::classes::types
