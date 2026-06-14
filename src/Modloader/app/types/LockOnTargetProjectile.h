#pragma once
#include <Modloader/app/structs/LockOnTargetProjectile.h>
#include <Modloader/app/structs/LockOnTargetProjectile__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LockOnTargetProjectile {
        inline app::LockOnTargetProjectile__Class** type_info() {
            static app::LockOnTargetProjectile__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LockOnTargetProjectile__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LockOnTargetProjectile__Class* get_class() {
            return il2cpp::get_class<app::LockOnTargetProjectile__Class>(type_info(), "", "LockOnTargetProjectile");
        }
        inline app::LockOnTargetProjectile* create() {
            return il2cpp::create_object<app::LockOnTargetProjectile>(get_class());
        }
    } // namespace LockOnTargetProjectile
} // namespace app::classes::types
