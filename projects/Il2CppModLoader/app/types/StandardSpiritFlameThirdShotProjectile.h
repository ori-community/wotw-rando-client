#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StandardSpiritFlameThirdShotProjectile {
        namespace {
            inline app::StandardSpiritFlameThirdShotProjectile__Class* type_info_ref = nullptr;
        }
        inline app::StandardSpiritFlameThirdShotProjectile__Class** type_info = &type_info_ref;
        inline app::StandardSpiritFlameThirdShotProjectile__Class* get_class() {
            return il2cpp::get_class<app::StandardSpiritFlameThirdShotProjectile__Class>(type_info, "", "StandardSpiritFlameThirdShotProjectile");
        }
        inline app::StandardSpiritFlameThirdShotProjectile* create() {
            return il2cpp::create_object<app::StandardSpiritFlameThirdShotProjectile>(get_class());
        }
    } // namespace StandardSpiritFlameThirdShotProjectile
} // namespace app::classes::types
