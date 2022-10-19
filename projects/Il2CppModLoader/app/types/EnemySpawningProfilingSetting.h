#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnemySpawningProfilingSetting {
        namespace {
            inline app::EnemySpawningProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::EnemySpawningProfilingSetting__Class** type_info = &type_info_ref;
        inline app::EnemySpawningProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::EnemySpawningProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "EnemySpawningProfilingSetting");
        }
        inline app::EnemySpawningProfilingSetting* create() {
            return il2cpp::create_object<app::EnemySpawningProfilingSetting>(get_class());
        }
    } // namespace EnemySpawningProfilingSetting
} // namespace app::classes::types
