#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemy_IdleState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TentacleEnemy_IdleState__Class** type_info;
        inline app::TentacleEnemy_IdleState__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_IdleState__Class>(type_info, "", "TentacleEnemy", "IdleState");
        }
        inline app::TentacleEnemy_IdleState* create() {
            return il2cpp::create_object<app::TentacleEnemy_IdleState>(get_class());
        }
    } // namespace TentacleEnemy_IdleState
} // namespace app::classes::types
