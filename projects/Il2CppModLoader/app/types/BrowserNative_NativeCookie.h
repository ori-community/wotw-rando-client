#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserNative_NativeCookie {
        inline app::BrowserNative_NativeCookie__Class** type_info = (app::BrowserNative_NativeCookie__Class**)(modloader::win::memory::resolve_rva(0x04756EC0));
        inline app::BrowserNative_NativeCookie__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_NativeCookie__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "NativeCookie");
        }
        inline app::BrowserNative_NativeCookie* create() {
            return il2cpp::create_object<app::BrowserNative_NativeCookie>(get_class());
        }
    } // namespace BrowserNative_NativeCookie
} // namespace app::classes::types
