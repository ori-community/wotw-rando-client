#pragma once
#include <Modloader/app/structs/ShootingSpiderAnimations.h>
#include <Modloader/app/structs/ShootingSpiderAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShootingSpiderAnimations {
        inline app::ShootingSpiderAnimations__Class** type_info() {
            static app::ShootingSpiderAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShootingSpiderAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShootingSpiderAnimations__Class* get_class() {
            return il2cpp::get_class<app::ShootingSpiderAnimations__Class>(type_info(), "", "ShootingSpiderAnimations");
        }
        inline app::ShootingSpiderAnimations* create() {
            return il2cpp::create_object<app::ShootingSpiderAnimations>(get_class());
        }
    } // namespace ShootingSpiderAnimations
} // namespace app::classes::types
