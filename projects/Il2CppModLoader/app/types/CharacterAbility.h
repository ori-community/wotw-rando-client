#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterAbility {
        inline app::CharacterAbility__Class** type_info = (app::CharacterAbility__Class**)(modloader::win::memory::resolve_rva(0x04780D70));
        inline app::CharacterAbility__Class* get_class() {
            return il2cpp::get_class<app::CharacterAbility__Class>(type_info, "", "CharacterAbility");
        }
        inline app::CharacterAbility* create() {
            return il2cpp::create_object<app::CharacterAbility>(get_class());
        }
    } // namespace CharacterAbility
} // namespace app::classes::types
