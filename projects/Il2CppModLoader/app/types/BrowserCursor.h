#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserCursor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BrowserCursor__Class** type_info;
        inline app::BrowserCursor__Class* get_class() {
            return il2cpp::get_class<app::BrowserCursor__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserCursor");
        }
        inline app::BrowserCursor* create() {
            return il2cpp::create_object<app::BrowserCursor>(get_class());
        }
    } // namespace BrowserCursor
} // namespace app::classes::types
