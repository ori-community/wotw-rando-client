#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemy_DyingState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TentacleEnemy_DyingState__Class** type_info;
        inline app::TentacleEnemy_DyingState__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_DyingState__Class>(type_info, "", "TentacleEnemy", "DyingState");
        }
        inline app::TentacleEnemy_DyingState* create() {
            return il2cpp::create_object<app::TentacleEnemy_DyingState>(get_class());
        }
    } // namespace TentacleEnemy_DyingState
} // namespace app::classes::types
