#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacySwarmEnemy_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacySwarmEnemy_States__Class** type_info;
        inline app::LegacySwarmEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacySwarmEnemy_States__Class>(type_info, "", "LegacySwarmEnemy", "States");
        }
        inline app::LegacySwarmEnemy_States* create() {
            return il2cpp::create_object<app::LegacySwarmEnemy_States>(get_class());
        }
    } // namespace LegacySwarmEnemy_States
} // namespace app::classes::types
