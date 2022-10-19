#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterGravityToGround {
        namespace {
            inline app::CharacterGravityToGround__Class* type_info_ref = nullptr;
        }
        inline app::CharacterGravityToGround__Class** type_info = &type_info_ref;
        inline app::CharacterGravityToGround__Class* get_class() {
            return il2cpp::get_class<app::CharacterGravityToGround__Class>(type_info, "", "CharacterGravityToGround");
        }
        inline app::CharacterGravityToGround* create() {
            return il2cpp::create_object<app::CharacterGravityToGround>(get_class());
        }
    } // namespace CharacterGravityToGround
} // namespace app::classes::types
