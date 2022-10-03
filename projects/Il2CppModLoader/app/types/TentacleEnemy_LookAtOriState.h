#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemy_LookAtOriState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TentacleEnemy_LookAtOriState__Class** type_info;
        inline app::TentacleEnemy_LookAtOriState__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_LookAtOriState__Class>(type_info, "", "TentacleEnemy", "LookAtOriState");
        }
        inline app::TentacleEnemy_LookAtOriState* create() {
            return il2cpp::create_object<app::TentacleEnemy_LookAtOriState>(get_class());
        }
    } // namespace TentacleEnemy_LookAtOriState
} // namespace app::classes::types
