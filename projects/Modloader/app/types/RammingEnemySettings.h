#pragma once
#include <Modloader/app/structs/RammingEnemySettings.h>
#include <Modloader/app/structs/RammingEnemySettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingEnemySettings {
        inline app::RammingEnemySettings__Class** type_info() {
            static app::RammingEnemySettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RammingEnemySettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RammingEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::RammingEnemySettings__Class>(type_info(), "", "RammingEnemySettings");
        }
        inline app::RammingEnemySettings* create() {
            return il2cpp::create_object<app::RammingEnemySettings>(get_class());
        }
    } // namespace RammingEnemySettings
} // namespace app::classes::types
