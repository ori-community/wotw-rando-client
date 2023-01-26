#pragma once
#include <Modloader/app/structs/FloatingRockTurrentEnemySettings.h>
#include <Modloader/app/structs/FloatingRockTurrentEnemySettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatingRockTurrentEnemySettings {
        inline app::FloatingRockTurrentEnemySettings__Class** type_info() {
            static app::FloatingRockTurrentEnemySettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatingRockTurrentEnemySettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatingRockTurrentEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockTurrentEnemySettings__Class>(type_info(), "", "FloatingRockTurrentEnemySettings");
        }
        inline app::FloatingRockTurrentEnemySettings* create() {
            return il2cpp::create_object<app::FloatingRockTurrentEnemySettings>(get_class());
        }
    } // namespace FloatingRockTurrentEnemySettings
} // namespace app::classes::types
