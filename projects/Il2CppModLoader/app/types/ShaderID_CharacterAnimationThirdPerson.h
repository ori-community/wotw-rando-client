#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CharacterAnimationThirdPerson {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CharacterAnimationThirdPerson__Class** type_info;
        inline app::ShaderID_CharacterAnimationThirdPerson__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CharacterAnimationThirdPerson__Class>(type_info, "RootMotion.Demos", "ShaderID_CharacterAnimationThirdPerson");
        }
        inline app::ShaderID_CharacterAnimationThirdPerson* create() {
            return il2cpp::create_object<app::ShaderID_CharacterAnimationThirdPerson>(get_class());
        }
    } // namespace ShaderID_CharacterAnimationThirdPerson
} // namespace app::classes::types
