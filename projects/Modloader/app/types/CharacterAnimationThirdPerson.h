#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterAnimationThirdPerson__Class.h>
#include <Modloader/app/structs/CharacterAnimationThirdPerson.h>

namespace app::classes::types {
    namespace CharacterAnimationThirdPerson {
        namespace {
            inline app::CharacterAnimationThirdPerson__Class* type_info_ref = nullptr;
        }
        inline app::CharacterAnimationThirdPerson__Class** type_info = &type_info_ref;
        inline app::CharacterAnimationThirdPerson__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationThirdPerson__Class>(type_info, "RootMotion.Demos", "CharacterAnimationThirdPerson");
        }
        inline app::CharacterAnimationThirdPerson* create() {
            return il2cpp::create_object<app::CharacterAnimationThirdPerson>(get_class());
        }
    } // namespace CharacterAnimationThirdPerson
} // namespace app::classes::types
