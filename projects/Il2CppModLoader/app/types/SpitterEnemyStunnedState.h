#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemyStunnedState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpitterEnemyStunnedState__Class** type_info;
        inline app::SpitterEnemyStunnedState__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemyStunnedState__Class>(type_info, "", "SpitterEnemyStunnedState");
        }
        inline app::SpitterEnemyStunnedState* create() {
            return il2cpp::create_object<app::SpitterEnemyStunnedState>(get_class());
        }
    } // namespace SpitterEnemyStunnedState
} // namespace app::classes::types
