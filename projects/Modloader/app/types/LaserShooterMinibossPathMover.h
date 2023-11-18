#pragma once
#include <Modloader/app/structs/LaserShooterMinibossPathMover.h>
#include <Modloader/app/structs/LaserShooterMinibossPathMover__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossPathMover {
        inline app::LaserShooterMinibossPathMover__Class** type_info() {
            static app::LaserShooterMinibossPathMover__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterMinibossPathMover__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterMinibossPathMover__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossPathMover__Class>(type_info(), "", "LaserShooterMinibossPathMover");
        }
        inline app::LaserShooterMinibossPathMover* create() {
            return il2cpp::create_object<app::LaserShooterMinibossPathMover>(get_class());
        }
    } // namespace LaserShooterMinibossPathMover
} // namespace app::classes::types
