#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinGlowSpell_QuickGlowSetupInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinGlowSpell_QuickGlowSetupInfo__Array__Class** type_info;
        inline app::SeinGlowSpell_QuickGlowSetupInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinGlowSpell_QuickGlowSetupInfo__Array__Class>(type_info, "", "SeinGlowSpell+QuickGlowSetupInfo[]");
        }
        inline app::SeinGlowSpell_QuickGlowSetupInfo__Array* create() {
            return il2cpp::create_object<app::SeinGlowSpell_QuickGlowSetupInfo__Array>(get_class());
        }
    } // namespace SeinGlowSpell_QuickGlowSetupInfo__Array
} // namespace app::classes::types
