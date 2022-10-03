#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserCursor_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BrowserCursor_c__Class** type_info;
        inline app::BrowserCursor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserCursor_c__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserCursor", "<>c");
        }
        inline app::BrowserCursor_c* create() {
            return il2cpp::create_object<app::BrowserCursor_c>(get_class());
        }
    } // namespace BrowserCursor_c
} // namespace app::classes::types
