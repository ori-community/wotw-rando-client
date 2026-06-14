#pragma once
#include <Modloader/app/structs/DashOwlEnemySettings.h>
#include <Modloader/app/structs/DashOwlEnemySettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashOwlEnemySettings {
        inline app::DashOwlEnemySettings__Class** type_info() {
            static app::DashOwlEnemySettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DashOwlEnemySettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DashOwlEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::DashOwlEnemySettings__Class>(type_info(), "", "DashOwlEnemySettings");
        }
        inline app::DashOwlEnemySettings* create() {
            return il2cpp::create_object<app::DashOwlEnemySettings>(get_class());
        }
    } // namespace DashOwlEnemySettings
} // namespace app::classes::types
