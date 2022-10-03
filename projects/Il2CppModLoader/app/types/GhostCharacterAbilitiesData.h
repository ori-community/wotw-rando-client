#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostCharacterAbilitiesData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostCharacterAbilitiesData__Class** type_info;
        inline app::GhostCharacterAbilitiesData__Class* get_class() {
            return il2cpp::get_class<app::GhostCharacterAbilitiesData__Class>(type_info, "", "GhostCharacterAbilitiesData");
        }
        inline app::GhostCharacterAbilitiesData* create() {
            return il2cpp::create_object<app::GhostCharacterAbilitiesData>(get_class());
        }
    } // namespace GhostCharacterAbilitiesData
} // namespace app::classes::types
