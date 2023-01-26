#pragma once
#include <Modloader/app/structs/ChargeShotProjectile.h>
#include <Modloader/app/structs/ChargeShotProjectile__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChargeShotProjectile {
        inline app::ChargeShotProjectile__Class** type_info() {
            static app::ChargeShotProjectile__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChargeShotProjectile__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChargeShotProjectile__Class* get_class() {
            return il2cpp::get_class<app::ChargeShotProjectile__Class>(type_info(), "", "ChargeShotProjectile");
        }
        inline app::ChargeShotProjectile* create() {
            return il2cpp::create_object<app::ChargeShotProjectile>(get_class());
        }
    } // namespace ChargeShotProjectile
} // namespace app::classes::types
