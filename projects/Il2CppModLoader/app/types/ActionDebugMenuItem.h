#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActionDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActionDebugMenuItem__Class** type_info;
        inline app::ActionDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::ActionDebugMenuItem__Class>(type_info, "", "ActionDebugMenuItem");
        }
        inline app::ActionDebugMenuItem* create() {
            return il2cpp::create_object<app::ActionDebugMenuItem>(get_class());
        }
    } // namespace ActionDebugMenuItem
} // namespace app::classes::types
