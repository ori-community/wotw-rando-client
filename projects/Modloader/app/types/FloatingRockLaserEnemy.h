#pragma once
#include <Modloader/app/structs/FloatingRockLaserEnemy.h>
#include <Modloader/app/structs/FloatingRockLaserEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatingRockLaserEnemy {
        inline app::FloatingRockLaserEnemy__Class** type_info() {
            static app::FloatingRockLaserEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatingRockLaserEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatingRockLaserEnemy__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockLaserEnemy__Class>(type_info(), "", "FloatingRockLaserEnemy");
        }
        inline app::FloatingRockLaserEnemy* create() {
            return il2cpp::create_object<app::FloatingRockLaserEnemy>(get_class());
        }
    } // namespace FloatingRockLaserEnemy
} // namespace app::classes::types
