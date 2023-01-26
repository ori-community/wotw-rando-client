#pragma once
#include <Modloader/app/structs/SpikeProjectile.h>
#include <Modloader/app/structs/SpikeProjectile__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpikeProjectile {
        inline app::SpikeProjectile__Class** type_info() {
            static app::SpikeProjectile__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpikeProjectile__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpikeProjectile__Class* get_class() {
            return il2cpp::get_class<app::SpikeProjectile__Class>(type_info(), "", "SpikeProjectile");
        }
        inline app::SpikeProjectile* create() {
            return il2cpp::create_object<app::SpikeProjectile>(get_class());
        }
    } // namespace SpikeProjectile
} // namespace app::classes::types
