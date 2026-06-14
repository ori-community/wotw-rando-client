#pragma once
#include <Modloader/app/structs/LaserShooterHommingMissleAttackBehaviour.h>
#include <Modloader/app/structs/LaserShooterHommingMissleAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterHommingMissleAttackBehaviour {
        inline app::LaserShooterHommingMissleAttackBehaviour__Class** type_info() {
            static app::LaserShooterHommingMissleAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterHommingMissleAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterHommingMissleAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterHommingMissleAttackBehaviour__Class>(type_info(), "", "LaserShooterHommingMissleAttackBehaviour");
        }
        inline app::LaserShooterHommingMissleAttackBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterHommingMissleAttackBehaviour>(get_class());
        }
    } // namespace LaserShooterHommingMissleAttackBehaviour
} // namespace app::classes::types
