#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StandardSpiritFlameProjectile {
        namespace {
            app::StandardSpiritFlameProjectile__Class* type_info_ref = nullptr;
        }
        app::StandardSpiritFlameProjectile__Class** type_info = &type_info_ref;
        inline app::StandardSpiritFlameProjectile__Class* get_class() {
            return il2cpp::get_class<app::StandardSpiritFlameProjectile__Class>(type_info, "", "StandardSpiritFlameProjectile");
        }
        inline app::StandardSpiritFlameProjectile* create() {
            return il2cpp::create_object<app::StandardSpiritFlameProjectile>(get_class());
        }
    } // namespace StandardSpiritFlameProjectile
} // namespace app::classes::types
