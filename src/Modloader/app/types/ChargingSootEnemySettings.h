#pragma once
#include <Modloader/app/structs/ChargingSootEnemySettings.h>
#include <Modloader/app/structs/ChargingSootEnemySettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChargingSootEnemySettings {
        inline app::ChargingSootEnemySettings__Class** type_info() {
            static app::ChargingSootEnemySettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChargingSootEnemySettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChargingSootEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::ChargingSootEnemySettings__Class>(type_info(), "", "ChargingSootEnemySettings");
        }
        inline app::ChargingSootEnemySettings* create() {
            return il2cpp::create_object<app::ChargingSootEnemySettings>(get_class());
        }
    } // namespace ChargingSootEnemySettings
} // namespace app::classes::types
