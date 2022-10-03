#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterAnimationThirdPerson {
        namespace {
            app::CharacterAnimationThirdPerson__Class* type_info_ref = nullptr;
        }
        app::CharacterAnimationThirdPerson__Class** type_info = &type_info_ref;
        inline app::CharacterAnimationThirdPerson__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationThirdPerson__Class>(type_info, "RootMotion.Demos", "CharacterAnimationThirdPerson");
        }
        inline app::CharacterAnimationThirdPerson* create() {
            return il2cpp::create_object<app::CharacterAnimationThirdPerson>(get_class());
        }
    } // namespace CharacterAnimationThirdPerson
} // namespace app::classes::types
