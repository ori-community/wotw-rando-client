#pragma once
#include <Modloader/app/structs/ShootingSpiderSounds.h>
#include <Modloader/app/structs/ShootingSpiderSounds__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShootingSpiderSounds {
        inline app::ShootingSpiderSounds__Class** type_info() {
            static app::ShootingSpiderSounds__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShootingSpiderSounds__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShootingSpiderSounds__Class* get_class() {
            return il2cpp::get_class<app::ShootingSpiderSounds__Class>(type_info(), "", "ShootingSpiderSounds");
        }
        inline app::ShootingSpiderSounds* create() {
            return il2cpp::create_object<app::ShootingSpiderSounds>(get_class());
        }
    } // namespace ShootingSpiderSounds
} // namespace app::classes::types
