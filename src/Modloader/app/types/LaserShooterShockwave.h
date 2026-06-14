#pragma once
#include <Modloader/app/structs/LaserShooterShockwave.h>
#include <Modloader/app/structs/LaserShooterShockwave__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterShockwave {
        inline app::LaserShooterShockwave__Class** type_info() {
            static app::LaserShooterShockwave__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterShockwave__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterShockwave__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterShockwave__Class>(type_info(), "", "LaserShooterShockwave");
        }
        inline app::LaserShooterShockwave* create() {
            return il2cpp::create_object<app::LaserShooterShockwave>(get_class());
        }
    } // namespace LaserShooterShockwave
} // namespace app::classes::types
