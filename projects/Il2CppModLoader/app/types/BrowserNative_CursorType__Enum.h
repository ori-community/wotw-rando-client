#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_CursorType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BrowserNative_CursorType__Enum__Class** type_info;
        inline app::BrowserNative_CursorType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_CursorType__Enum__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "CursorType");
        }
        inline app::BrowserNative_CursorType__Enum* create() {
            return il2cpp::create_object<app::BrowserNative_CursorType__Enum>(get_class());
        }
        inline app::BrowserNative_CursorType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::BrowserNative_CursorType__Enum__Array>(get_class(), size);
        }
        inline app::BrowserNative_CursorType__Enum__Array* create_array(const std::vector<app::BrowserNative_CursorType__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::BrowserNative_CursorType__Enum__Array>(get_class(), items);
        }
    } // namespace BrowserNative_CursorType__Enum
} // namespace app::classes::types
