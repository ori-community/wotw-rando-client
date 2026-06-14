#pragma once
#include <Modloader/app/structs/IceSpiritFlameProjectile.h>
#include <Modloader/app/structs/IceSpiritFlameProjectile__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IceSpiritFlameProjectile {
        inline app::IceSpiritFlameProjectile__Class** type_info() {
            static app::IceSpiritFlameProjectile__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IceSpiritFlameProjectile__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IceSpiritFlameProjectile__Class* get_class() {
            return il2cpp::get_class<app::IceSpiritFlameProjectile__Class>(type_info(), "", "IceSpiritFlameProjectile");
        }
        inline app::IceSpiritFlameProjectile* create() {
            return il2cpp::create_object<app::IceSpiritFlameProjectile>(get_class());
        }
    } // namespace IceSpiritFlameProjectile
} // namespace app::classes::types
