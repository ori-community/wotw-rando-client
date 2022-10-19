#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserNavState {
        inline app::BrowserNavState__Class** type_info = (app::BrowserNavState__Class**)(modloader::win::memory::resolve_rva(0x04757318));
        inline app::BrowserNavState__Class* get_class() {
            return il2cpp::get_class<app::BrowserNavState__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNavState");
        }
        inline app::BrowserNavState* create() {
            return il2cpp::create_object<app::BrowserNavState>(get_class());
        }
    } // namespace BrowserNavState
} // namespace app::classes::types
