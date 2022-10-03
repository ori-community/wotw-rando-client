#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemy_StunState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TentacleEnemy_StunState__Class** type_info;
        inline app::TentacleEnemy_StunState__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_StunState__Class>(type_info, "", "TentacleEnemy", "StunState");
        }
        inline app::TentacleEnemy_StunState* create() {
            return il2cpp::create_object<app::TentacleEnemy_StunState>(get_class());
        }
    } // namespace TentacleEnemy_StunState
} // namespace app::classes::types
