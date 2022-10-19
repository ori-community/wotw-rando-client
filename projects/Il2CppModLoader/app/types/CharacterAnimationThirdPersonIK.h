#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
