#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserNative_MouseButton__Enum {
        inline app::BrowserNative_MouseButton__Enum__Class** type_info = (app::BrowserNative_MouseButton__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470E088));
        inline app::BrowserNative_MouseButton__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_MouseButton__Enum__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "MouseButton");
        }
        inline app::BrowserNative_MouseButton__Enum* create() {
            return il2cpp::create_object<app::BrowserNative_MouseButton__Enum>(get_class());
        }
    } // namespace BrowserNative_MouseButton__Enum
} // namespace app::classes::types
