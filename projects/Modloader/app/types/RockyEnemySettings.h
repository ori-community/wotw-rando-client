#pragma once
#include <Modloader/app/structs/RockyEnemySettings.h>
#include <Modloader/app/structs/RockyEnemySettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockyEnemySettings {
        inline app::RockyEnemySettings__Class** type_info() {
            static app::RockyEnemySettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RockyEnemySettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RockyEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemySettings__Class>(type_info(), "", "RockyEnemySettings");
        }
        inline app::RockyEnemySettings* create() {
            return il2cpp::create_object<app::RockyEnemySettings>(get_class());
        }
    } // namespace RockyEnemySettings
} // namespace app::classes::types
