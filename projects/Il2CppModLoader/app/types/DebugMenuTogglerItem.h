#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugMenuTogglerItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugMenuTogglerItem__Class** type_info;
        inline app::DebugMenuTogglerItem__Class* get_class() {
            return il2cpp::get_class<app::DebugMenuTogglerItem__Class>(type_info, "", "DebugMenuTogglerItem");
        }
        inline app::DebugMenuTogglerItem* create() {
            return il2cpp::create_object<app::DebugMenuTogglerItem>(get_class());
        }
    } // namespace DebugMenuTogglerItem
} // namespace app::classes::types
