#pragma once
#include <Modloader/app/structs/LaserShooterIdleBehaviour.h>
#include <Modloader/app/structs/LaserShooterIdleBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterIdleBehaviour {
        inline app::LaserShooterIdleBehaviour__Class** type_info() {
            static app::LaserShooterIdleBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterIdleBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterIdleBehaviour__Class>(type_info(), "", "LaserShooterIdleBehaviour");
        }
        inline app::LaserShooterIdleBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterIdleBehaviour>(get_class());
        }
    } // namespace LaserShooterIdleBehaviour
} // namespace app::classes::types
