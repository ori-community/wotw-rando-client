#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinStandardSpiritFlameAbility_PoisonSettings {
        inline app::SeinStandardSpiritFlameAbility_PoisonSettings__Class** type_info = (app::SeinStandardSpiritFlameAbility_PoisonSettings__Class**)(modloader::win::memory::resolve_rva(0x04775540));
        inline app::SeinStandardSpiritFlameAbility_PoisonSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinStandardSpiritFlameAbility_PoisonSettings__Class>(type_info, "", "SeinStandardSpiritFlameAbility", "PoisonSettings");
        }
        inline app::SeinStandardSpiritFlameAbility_PoisonSettings* create() {
            return il2cpp::create_object<app::SeinStandardSpiritFlameAbility_PoisonSettings>(get_class());
        }
    } // namespace SeinStandardSpiritFlameAbility_PoisonSettings
} // namespace app::classes::types
