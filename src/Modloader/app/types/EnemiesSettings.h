#pragma once
#include <Modloader/app/structs/EnemiesSettings.h>
#include <Modloader/app/structs/EnemiesSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemiesSettings {
        inline app::EnemiesSettings__Class** type_info() {
            static app::EnemiesSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnemiesSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnemiesSettings__Class* get_class() {
            return il2cpp::get_class<app::EnemiesSettings__Class>(type_info(), "Moon", "EnemiesSettings");
        }
        inline app::EnemiesSettings* create() {
            return il2cpp::create_object<app::EnemiesSettings>(get_class());
        }
    } // namespace EnemiesSettings
} // namespace app::classes::types
