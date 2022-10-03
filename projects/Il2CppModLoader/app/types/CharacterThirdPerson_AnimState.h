#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterThirdPerson_AnimState {
        namespace {
            app::CharacterThirdPerson_AnimState__Class* type_info_ref = nullptr;
        }
        app::CharacterThirdPerson_AnimState__Class** type_info = &type_info_ref;
        inline app::CharacterThirdPerson_AnimState__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterThirdPerson_AnimState__Class>(type_info, "RootMotion.Demos", "CharacterThirdPerson", "AnimState");
        }
        inline app::CharacterThirdPerson_AnimState* create() {
            return il2cpp::create_object<app::CharacterThirdPerson_AnimState>(get_class());
        }
        inline app::CharacterThirdPerson_AnimState__Boxed* box(app::CharacterThirdPerson_AnimState value) {
            return il2cpp::box_value<app::CharacterThirdPerson_AnimState__Boxed>(get_class(), value);
        }
    } // namespace CharacterThirdPerson_AnimState
} // namespace app::classes::types
