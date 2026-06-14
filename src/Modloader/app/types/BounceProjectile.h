#pragma once
#include <Modloader/app/structs/BounceProjectile.h>
#include <Modloader/app/structs/BounceProjectile__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BounceProjectile {
        inline app::BounceProjectile__Class** type_info() {
            static app::BounceProjectile__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BounceProjectile__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BounceProjectile__Class* get_class() {
            return il2cpp::get_class<app::BounceProjectile__Class>(type_info(), "", "BounceProjectile");
        }
        inline app::BounceProjectile* create() {
            return il2cpp::create_object<app::BounceProjectile>(get_class());
        }
    } // namespace BounceProjectile
} // namespace app::classes::types
