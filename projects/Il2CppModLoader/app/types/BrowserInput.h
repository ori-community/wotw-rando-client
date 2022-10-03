#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserInput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BrowserInput__Class** type_info;
        inline app::BrowserInput__Class* get_class() {
            return il2cpp::get_class<app::BrowserInput__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserInput");
        }
        inline app::BrowserInput* create() {
            return il2cpp::create_object<app::BrowserInput>(get_class());
        }
    } // namespace BrowserInput
} // namespace app::classes::types
