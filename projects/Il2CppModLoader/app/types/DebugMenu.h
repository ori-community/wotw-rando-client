#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugMenu {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugMenu__Class** type_info;
        inline app::DebugMenu__Class* get_class() {
            return il2cpp::get_class<app::DebugMenu__Class>(type_info, "", "DebugMenu");
        }
        inline app::DebugMenu* create() {
            return il2cpp::create_object<app::DebugMenu>(get_class());
        }
    } // namespace DebugMenu
} // namespace app::classes::types
