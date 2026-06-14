#pragma once
#include <Modloader/app/structs/SpiritShotProjectile.h>
#include <Modloader/app/structs/SpiritShotProjectile__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShotProjectile {
        inline app::SpiritShotProjectile__Class** type_info() {
            static app::SpiritShotProjectile__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShotProjectile__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShotProjectile__Class* get_class() {
            return il2cpp::get_class<app::SpiritShotProjectile__Class>(type_info(), "", "SpiritShotProjectile");
        }
        inline app::SpiritShotProjectile* create() {
            return il2cpp::create_object<app::SpiritShotProjectile>(get_class());
        }
    } // namespace SpiritShotProjectile
} // namespace app::classes::types
