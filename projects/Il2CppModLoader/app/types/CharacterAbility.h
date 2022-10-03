#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterAbility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharacterAbility__Class** type_info;
        inline app::CharacterAbility__Class* get_class() {
            return il2cpp::get_class<app::CharacterAbility__Class>(type_info, "", "CharacterAbility");
        }
        inline app::CharacterAbility* create() {
            return il2cpp::create_object<app::CharacterAbility>(get_class());
        }
    } // namespace CharacterAbility
} // namespace app::classes::types
