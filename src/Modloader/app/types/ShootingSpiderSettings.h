#pragma once
#include <Modloader/app/structs/ShootingSpiderSettings.h>
#include <Modloader/app/structs/ShootingSpiderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShootingSpiderSettings {
        inline app::ShootingSpiderSettings__Class** type_info() {
            static app::ShootingSpiderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShootingSpiderSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShootingSpiderSettings__Class* get_class() {
            return il2cpp::get_class<app::ShootingSpiderSettings__Class>(type_info(), "", "ShootingSpiderSettings");
        }
        inline app::ShootingSpiderSettings* create() {
            return il2cpp::create_object<app::ShootingSpiderSettings>(get_class());
        }
    } // namespace ShootingSpiderSettings
} // namespace app::classes::types
