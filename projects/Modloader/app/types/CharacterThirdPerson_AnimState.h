#pragma once
#include <Modloader/app/structs/CharacterThirdPerson_AnimState.h>
#include <Modloader/app/structs/CharacterThirdPerson_AnimState__Boxed.h>
#include <Modloader/app/structs/CharacterThirdPerson_AnimState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterThirdPerson_AnimState {
        inline app::CharacterThirdPerson_AnimState__Class** type_info() {
            static app::CharacterThirdPerson_AnimState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterThirdPerson_AnimState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterThirdPerson_AnimState__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterThirdPerson_AnimState__Class>(type_info(), "RootMotion.Demos", "CharacterThirdPerson", "AnimState");
        }
        inline app::CharacterThirdPerson_AnimState* create() {
            return il2cpp::create_object<app::CharacterThirdPerson_AnimState>(get_class());
        }
        inline app::CharacterThirdPerson_AnimState__Boxed* box(app::CharacterThirdPerson_AnimState value) {
            return il2cpp::box_value<app::CharacterThirdPerson_AnimState__Boxed>(get_class(), value);
        }
    } // namespace CharacterThirdPerson_AnimState
} // namespace app::classes::types
