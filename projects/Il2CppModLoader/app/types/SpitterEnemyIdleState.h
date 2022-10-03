#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemyIdleState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpitterEnemyIdleState__Class** type_info;
        inline app::SpitterEnemyIdleState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyIdleState__Class>(type_info, "", "SpitterEnemyIdleState");
        }
        inline app::SpitterEnemyIdleState* create() {
            return il2cpp::create_object<app::SpitterEnemyIdleState>(get_class());
        }
    } // namespace SpitterEnemyIdleState
} // namespace app::classes::types
