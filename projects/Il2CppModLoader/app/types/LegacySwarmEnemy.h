#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacySwarmEnemy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacySwarmEnemy__Class** type_info;
        inline app::LegacySwarmEnemy__Class* get_class() {
            return il2cpp::get_class<app::LegacySwarmEnemy__Class>(type_info, "", "LegacySwarmEnemy");
        }
        inline app::LegacySwarmEnemy* create() {
            return il2cpp::create_object<app::LegacySwarmEnemy>(get_class());
        }
    } // namespace LegacySwarmEnemy
} // namespace app::classes::types
