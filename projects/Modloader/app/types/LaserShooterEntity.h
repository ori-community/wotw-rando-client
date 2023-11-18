#pragma once
#include <Modloader/app/structs/LaserShooterEntity.h>
#include <Modloader/app/structs/LaserShooterEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterEntity {
        inline app::LaserShooterEntity__Class** type_info() {
            static app::LaserShooterEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterEntity__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterEntity__Class>(type_info(), "", "LaserShooterEntity");
        }
        inline app::LaserShooterEntity* create() {
            return il2cpp::create_object<app::LaserShooterEntity>(get_class());
        }
    } // namespace LaserShooterEntity
} // namespace app::classes::types
