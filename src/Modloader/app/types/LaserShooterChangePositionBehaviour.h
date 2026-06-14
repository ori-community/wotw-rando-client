#pragma once
#include <Modloader/app/structs/LaserShooterChangePositionBehaviour.h>
#include <Modloader/app/structs/LaserShooterChangePositionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterChangePositionBehaviour {
        inline app::LaserShooterChangePositionBehaviour__Class** type_info() {
            static app::LaserShooterChangePositionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterChangePositionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterChangePositionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterChangePositionBehaviour__Class>(type_info(), "", "LaserShooterChangePositionBehaviour");
        }
        inline app::LaserShooterChangePositionBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterChangePositionBehaviour>(get_class());
        }
    } // namespace LaserShooterChangePositionBehaviour
} // namespace app::classes::types
