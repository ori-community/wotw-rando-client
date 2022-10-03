#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterGravity_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharacterGravity_c__Class** type_info;
        inline app::CharacterGravity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterGravity_c__Class>(type_info, "", "CharacterGravity", "<>c");
        }
        inline app::CharacterGravity_c* create() {
            return il2cpp::create_object<app::CharacterGravity_c>(get_class());
        }
    } // namespace CharacterGravity_c
} // namespace app::classes::types
