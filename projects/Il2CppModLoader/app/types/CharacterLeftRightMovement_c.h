#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterLeftRightMovement_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharacterLeftRightMovement_c__Class** type_info;
        inline app::CharacterLeftRightMovement_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterLeftRightMovement_c__Class>(type_info, "", "CharacterLeftRightMovement", "<>c");
        }
        inline app::CharacterLeftRightMovement_c* create() {
            return il2cpp::create_object<app::CharacterLeftRightMovement_c>(get_class());
        }
    } // namespace CharacterLeftRightMovement_c
} // namespace app::classes::types
