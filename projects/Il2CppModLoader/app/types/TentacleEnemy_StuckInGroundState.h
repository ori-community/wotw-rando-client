#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemy_StuckInGroundState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TentacleEnemy_StuckInGroundState__Class** type_info;
        inline app::TentacleEnemy_StuckInGroundState__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_StuckInGroundState__Class>(type_info, "", "TentacleEnemy", "StuckInGroundState");
        }
        inline app::TentacleEnemy_StuckInGroundState* create() {
            return il2cpp::create_object<app::TentacleEnemy_StuckInGroundState>(get_class());
        }
    } // namespace TentacleEnemy_StuckInGroundState
} // namespace app::classes::types
