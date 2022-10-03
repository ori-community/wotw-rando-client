#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinGlowSpell_QuickGlowSetupInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinGlowSpell_QuickGlowSetupInfo__Class** type_info;
        inline app::SeinGlowSpell_QuickGlowSetupInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGlowSpell_QuickGlowSetupInfo__Class>(type_info, "", "SeinGlowSpell", "QuickGlowSetupInfo");
        }
        inline app::SeinGlowSpell_QuickGlowSetupInfo* create() {
            return il2cpp::create_object<app::SeinGlowSpell_QuickGlowSetupInfo>(get_class());
        }
        inline app::SeinGlowSpell_QuickGlowSetupInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinGlowSpell_QuickGlowSetupInfo__Array>(get_class(), size);
        }
    } // namespace SeinGlowSpell_QuickGlowSetupInfo
} // namespace app::classes::types
