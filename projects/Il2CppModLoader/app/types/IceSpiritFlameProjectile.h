#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IceSpiritFlameProjectile {
        namespace {
            inline app::IceSpiritFlameProjectile__Class* type_info_ref = nullptr;
        }
        inline app::IceSpiritFlameProjectile__Class** type_info = &type_info_ref;
        inline app::IceSpiritFlameProjectile__Class* get_class() {
            return il2cpp::get_class<app::IceSpiritFlameProjectile__Class>(type_info, "", "IceSpiritFlameProjectile");
        }
        inline app::IceSpiritFlameProjectile* create() {
            return il2cpp::create_object<app::IceSpiritFlameProjectile>(get_class());
        }
    } // namespace IceSpiritFlameProjectile
} // namespace app::classes::types
