#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterAnimationThirdPersonIK__Class.h>
#include <Modloader/app/structs/CharacterAnimationThirdPersonIK.h>

namespace app::classes::types {
    namespace CharacterAnimationThirdPersonIK {
        namespace {
            inline app::CharacterAnimationThirdPersonIK__Class* type_info_ref = nullptr;
        }
        inline app::CharacterAnimationThirdPersonIK__Class** type_info = &type_info_ref;
        inline app::CharacterAnimationThirdPersonIK__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationThirdPersonIK__Class>(type_info, "RootMotion.Demos", "CharacterAnimationThirdPersonIK");
        }
        inline app::CharacterAnimationThirdPersonIK* create() {
            return il2cpp::create_object<app::CharacterAnimationThirdPersonIK>(get_class());
        }
    } // namespace CharacterAnimationThirdPersonIK
} // namespace app::classes::types
