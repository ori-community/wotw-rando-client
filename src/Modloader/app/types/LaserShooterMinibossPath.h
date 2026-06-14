#pragma once
#include <Modloader/app/structs/LaserShooterMinibossPath.h>
#include <Modloader/app/structs/LaserShooterMinibossPath__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossPath {
        inline app::LaserShooterMinibossPath__Class** type_info() {
            static app::LaserShooterMinibossPath__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterMinibossPath__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterMinibossPath__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossPath__Class>(type_info(), "", "LaserShooterMinibossPath");
        }
        inline app::LaserShooterMinibossPath* create() {
            return il2cpp::create_object<app::LaserShooterMinibossPath>(get_class());
        }
    } // namespace LaserShooterMinibossPath
} // namespace app::classes::types
