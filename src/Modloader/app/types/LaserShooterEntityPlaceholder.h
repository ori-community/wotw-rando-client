#pragma once
#include <Modloader/app/structs/LaserShooterEntityPlaceholder.h>
#include <Modloader/app/structs/LaserShooterEntityPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterEntityPlaceholder {
        inline app::LaserShooterEntityPlaceholder__Class** type_info() {
            static app::LaserShooterEntityPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterEntityPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterEntityPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterEntityPlaceholder__Class>(type_info(), "", "LaserShooterEntityPlaceholder");
        }
        inline app::LaserShooterEntityPlaceholder* create() {
            return il2cpp::create_object<app::LaserShooterEntityPlaceholder>(get_class());
        }
    } // namespace LaserShooterEntityPlaceholder
} // namespace app::classes::types
