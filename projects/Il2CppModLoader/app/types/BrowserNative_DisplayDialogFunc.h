#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_DisplayDialogFunc {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BrowserNative_DisplayDialogFunc__Class** type_info;
        inline app::BrowserNative_DisplayDialogFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_DisplayDialogFunc__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "DisplayDialogFunc");
        }
        inline app::BrowserNative_DisplayDialogFunc* create() {
            return il2cpp::create_object<app::BrowserNative_DisplayDialogFunc>(get_class());
        }
    } // namespace BrowserNative_DisplayDialogFunc
} // namespace app::classes::types
