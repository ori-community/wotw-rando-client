#pragma once
#include <Modloader/app/structs/LaserShooterMinibossWaitWhileMovingBehaviour.h>
#include <Modloader/app/structs/LaserShooterMinibossWaitWhileMovingBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossWaitWhileMovingBehaviour {
        inline app::LaserShooterMinibossWaitWhileMovingBehaviour__Class** type_info() {
            static app::LaserShooterMinibossWaitWhileMovingBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterMinibossWaitWhileMovingBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterMinibossWaitWhileMovingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossWaitWhileMovingBehaviour__Class>(type_info(), "", "LaserShooterMinibossWaitWhileMovingBehaviour");
        }
        inline app::LaserShooterMinibossWaitWhileMovingBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterMinibossWaitWhileMovingBehaviour>(get_class());
        }
    } // namespace LaserShooterMinibossWaitWhileMovingBehaviour
} // namespace app::classes::types
