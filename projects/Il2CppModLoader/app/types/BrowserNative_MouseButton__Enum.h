#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_MouseButton__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BrowserNative_MouseButton__Enum__Class** type_info;
        inline app::BrowserNative_MouseButton__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_MouseButton__Enum__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "MouseButton");
        }
        inline app::BrowserNative_MouseButton__Enum* create() {
            return il2cpp::create_object<app::BrowserNative_MouseButton__Enum>(get_class());
        }
    } // namespace BrowserNative_MouseButton__Enum
} // namespace app::classes::types
