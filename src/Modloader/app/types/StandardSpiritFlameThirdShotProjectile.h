#pragma once
#include <Modloader/app/structs/StandardSpiritFlameThirdShotProjectile.h>
#include <Modloader/app/structs/StandardSpiritFlameThirdShotProjectile__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StandardSpiritFlameThirdShotProjectile {
        inline app::StandardSpiritFlameThirdShotProjectile__Class** type_info() {
            static app::StandardSpiritFlameThirdShotProjectile__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StandardSpiritFlameThirdShotProjectile__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StandardSpiritFlameThirdShotProjectile__Class* get_class() {
            return il2cpp::get_class<app::StandardSpiritFlameThirdShotProjectile__Class>(type_info(), "", "StandardSpiritFlameThirdShotProjectile");
        }
        inline app::StandardSpiritFlameThirdShotProjectile* create() {
            return il2cpp::create_object<app::StandardSpiritFlameThirdShotProjectile>(get_class());
        }
    } // namespace StandardSpiritFlameThirdShotProjectile
} // namespace app::classes::types
