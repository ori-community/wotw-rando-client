#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserFocusState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BrowserFocusState__Class** type_info;
        inline app::BrowserFocusState__Class* get_class() {
            return il2cpp::get_class<app::BrowserFocusState__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserFocusState");
        }
        inline app::BrowserFocusState* create() {
            return il2cpp::create_object<app::BrowserFocusState>(get_class());
        }
    } // namespace BrowserFocusState
} // namespace app::classes::types
