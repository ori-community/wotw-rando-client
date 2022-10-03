#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemyWalkState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpitterEnemyWalkState__Class** type_info;
        inline app::SpitterEnemyWalkState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyWalkState__Class>(type_info, "", "SpitterEnemyWalkState");
        }
        inline app::SpitterEnemyWalkState* create() {
            return il2cpp::create_object<app::SpitterEnemyWalkState>(get_class());
        }
    } // namespace SpitterEnemyWalkState
} // namespace app::classes::types
