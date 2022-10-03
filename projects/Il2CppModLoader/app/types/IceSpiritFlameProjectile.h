#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IceSpiritFlameProjectile {
        namespace {
            app::IceSpiritFlameProjectile__Class* type_info_ref = nullptr;
        }
        app::IceSpiritFlameProjectile__Class** type_info = &type_info_ref;
        inline app::IceSpiritFlameProjectile__Class* get_class() {
            return il2cpp::get_class<app::IceSpiritFlameProjectile__Class>(type_info, "", "IceSpiritFlameProjectile");
        }
        inline app::IceSpiritFlameProjectile* create() {
            return il2cpp::create_object<app::IceSpiritFlameProjectile>(get_class());
        }
    } // namespace IceSpiritFlameProjectile
} // namespace app::classes::types
