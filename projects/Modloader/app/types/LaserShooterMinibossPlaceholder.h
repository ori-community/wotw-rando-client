#pragma once
#include <Modloader/app/structs/LaserShooterMinibossPlaceholder.h>
#include <Modloader/app/structs/LaserShooterMinibossPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossPlaceholder {
        inline app::LaserShooterMinibossPlaceholder__Class** type_info() {
            static app::LaserShooterMinibossPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterMinibossPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterMinibossPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossPlaceholder__Class>(type_info(), "", "LaserShooterMinibossPlaceholder");
        }
        inline app::LaserShooterMinibossPlaceholder* create() {
            return il2cpp::create_object<app::LaserShooterMinibossPlaceholder>(get_class());
        }
    } // namespace LaserShooterMinibossPlaceholder
} // namespace app::classes::types
