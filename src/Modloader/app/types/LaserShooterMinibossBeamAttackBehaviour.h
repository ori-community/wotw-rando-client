#pragma once
#include <Modloader/app/structs/LaserShooterMinibossBeamAttackBehaviour.h>
#include <Modloader/app/structs/LaserShooterMinibossBeamAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossBeamAttackBehaviour {
        inline app::LaserShooterMinibossBeamAttackBehaviour__Class** type_info() {
            static app::LaserShooterMinibossBeamAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterMinibossBeamAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterMinibossBeamAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossBeamAttackBehaviour__Class>(type_info(), "", "LaserShooterMinibossBeamAttackBehaviour");
        }
        inline app::LaserShooterMinibossBeamAttackBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterMinibossBeamAttackBehaviour>(get_class());
        }
    } // namespace LaserShooterMinibossBeamAttackBehaviour
} // namespace app::classes::types
