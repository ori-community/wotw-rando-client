#pragma once
#include <Modloader/app/structs/JumpShotProjectile.h>
#include <Modloader/app/structs/JumpShotProjectile__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumpShotProjectile {
        inline app::JumpShotProjectile__Class** type_info() {
            static app::JumpShotProjectile__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JumpShotProjectile__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JumpShotProjectile__Class* get_class() {
            return il2cpp::get_class<app::JumpShotProjectile__Class>(type_info(), "", "JumpShotProjectile");
        }
        inline app::JumpShotProjectile* create() {
            return il2cpp::create_object<app::JumpShotProjectile>(get_class());
        }
    } // namespace JumpShotProjectile
} // namespace app::classes::types
