#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBrowserUI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IBrowserUI__Class** type_info;
        inline app::IBrowserUI__Class* get_class() {
            return il2cpp::get_class<app::IBrowserUI__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "IBrowserUI");
        }
    } // namespace IBrowserUI
} // namespace app::classes::types
