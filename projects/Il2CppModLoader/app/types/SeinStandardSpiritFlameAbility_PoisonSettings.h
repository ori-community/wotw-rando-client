#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinStandardSpiritFlameAbility_PoisonSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinStandardSpiritFlameAbility_PoisonSettings__Class** type_info;
        inline app::SeinStandardSpiritFlameAbility_PoisonSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinStandardSpiritFlameAbility_PoisonSettings__Class>(type_info, "", "SeinStandardSpiritFlameAbility", "PoisonSettings");
        }
        inline app::SeinStandardSpiritFlameAbility_PoisonSettings* create() {
            return il2cpp::create_object<app::SeinStandardSpiritFlameAbility_PoisonSettings>(get_class());
        }
    } // namespace SeinStandardSpiritFlameAbility_PoisonSettings
} // namespace app::classes::types
