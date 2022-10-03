#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserInput_ButtonHistory {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BrowserInput_ButtonHistory__Class** type_info;
        inline app::BrowserInput_ButtonHistory__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserInput_ButtonHistory__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserInput", "ButtonHistory");
        }
        inline app::BrowserInput_ButtonHistory* create() {
            return il2cpp::create_object<app::BrowserInput_ButtonHistory>(get_class());
        }
    } // namespace BrowserInput_ButtonHistory
} // namespace app::classes::types
