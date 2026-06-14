#pragma once
#include <Modloader/app/structs/FishEnemySettings.h>
#include <Modloader/app/structs/FishEnemySettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FishEnemySettings {
        inline app::FishEnemySettings__Class** type_info() {
            static app::FishEnemySettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FishEnemySettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FishEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::FishEnemySettings__Class>(type_info(), "", "FishEnemySettings");
        }
        inline app::FishEnemySettings* create() {
            return il2cpp::create_object<app::FishEnemySettings>(get_class());
        }
    } // namespace FishEnemySettings
} // namespace app::classes::types
