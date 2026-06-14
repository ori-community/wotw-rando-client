#pragma once
#include <Modloader/app/structs/StandardSpiritFlameProjectile.h>
#include <Modloader/app/structs/StandardSpiritFlameProjectile__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StandardSpiritFlameProjectile {
        inline app::StandardSpiritFlameProjectile__Class** type_info() {
            static app::StandardSpiritFlameProjectile__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StandardSpiritFlameProjectile__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StandardSpiritFlameProjectile__Class* get_class() {
            return il2cpp::get_class<app::StandardSpiritFlameProjectile__Class>(type_info(), "", "StandardSpiritFlameProjectile");
        }
        inline app::StandardSpiritFlameProjectile* create() {
            return il2cpp::create_object<app::StandardSpiritFlameProjectile>(get_class());
        }
    } // namespace StandardSpiritFlameProjectile
} // namespace app::classes::types
