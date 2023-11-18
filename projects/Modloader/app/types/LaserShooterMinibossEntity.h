#pragma once
#include <Modloader/app/structs/LaserShooterMinibossEntity.h>
#include <Modloader/app/structs/LaserShooterMinibossEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossEntity {
        inline app::LaserShooterMinibossEntity__Class** type_info() {
            static app::LaserShooterMinibossEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LaserShooterMinibossEntity__Class**)(modloader::win::memory::resolve_rva(0x0472E5D0));
            }
            return cache;
        }
        inline app::LaserShooterMinibossEntity__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossEntity__Class>(type_info(), "", "LaserShooterMinibossEntity");
        }
        inline app::LaserShooterMinibossEntity* create() {
            return il2cpp::create_object<app::LaserShooterMinibossEntity>(get_class());
        }
    } // namespace LaserShooterMinibossEntity
} // namespace app::classes::types
