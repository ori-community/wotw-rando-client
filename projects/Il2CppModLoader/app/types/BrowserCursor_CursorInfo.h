#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserCursor_CursorInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BrowserCursor_CursorInfo__Class** type_info;
        inline app::BrowserCursor_CursorInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserCursor_CursorInfo__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserCursor", "CursorInfo");
        }
        inline app::BrowserCursor_CursorInfo* create() {
            return il2cpp::create_object<app::BrowserCursor_CursorInfo>(get_class());
        }
        inline app::BrowserCursor_CursorInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::BrowserCursor_CursorInfo__Array>(get_class(), size);
        }
    } // namespace BrowserCursor_CursorInfo
} // namespace app::classes::types
