#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserNative {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BrowserNative__Class** type_info;
        inline app::BrowserNative__Class* get_class() {
            return il2cpp::get_class<app::BrowserNative__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative");
        }
        inline app::BrowserNative* create() {
            return il2cpp::create_object<app::BrowserNative>(get_class());
        }
    } // namespace BrowserNative
} // namespace app::classes::types
