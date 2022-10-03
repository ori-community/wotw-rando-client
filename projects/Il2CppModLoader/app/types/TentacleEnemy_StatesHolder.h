#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleEnemy_StatesHolder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TentacleEnemy_StatesHolder__Class** type_info;
        inline app::TentacleEnemy_StatesHolder__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_StatesHolder__Class>(type_info, "", "TentacleEnemy", "StatesHolder");
        }
        inline app::TentacleEnemy_StatesHolder* create() {
            return il2cpp::create_object<app::TentacleEnemy_StatesHolder>(get_class());
        }
    } // namespace TentacleEnemy_StatesHolder
} // namespace app::classes::types
