#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemySpiritLeashedState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpitterEnemySpiritLeashedState__Class** type_info;
        inline app::SpitterEnemySpiritLeashedState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemySpiritLeashedState__Class>(type_info, "", "SpitterEnemySpiritLeashedState");
        }
        inline app::SpitterEnemySpiritLeashedState* create() {
            return il2cpp::create_object<app::SpitterEnemySpiritLeashedState>(get_class());
        }
    } // namespace SpitterEnemySpiritLeashedState
} // namespace app::classes::types
