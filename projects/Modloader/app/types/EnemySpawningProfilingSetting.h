#pragma once
#include <Modloader/app/structs/EnemySpawningProfilingSetting.h>
#include <Modloader/app/structs/EnemySpawningProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemySpawningProfilingSetting {
        inline app::EnemySpawningProfilingSetting__Class** type_info() {
            static app::EnemySpawningProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnemySpawningProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnemySpawningProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::EnemySpawningProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "EnemySpawningProfilingSetting");
        }
        inline app::EnemySpawningProfilingSetting* create() {
            return il2cpp::create_object<app::EnemySpawningProfilingSetting>(get_class());
        }
    } // namespace EnemySpawningProfilingSetting
} // namespace app::classes::types
