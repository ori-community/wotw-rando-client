#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CharacterAnimationSimple {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CharacterAnimationSimple__Class** type_info;
        inline app::ShaderID_CharacterAnimationSimple__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CharacterAnimationSimple__Class>(type_info, "RootMotion.Demos", "ShaderID_CharacterAnimationSimple");
        }
        inline app::ShaderID_CharacterAnimationSimple* create() {
            return il2cpp::create_object<app::ShaderID_CharacterAnimationSimple>(get_class());
        }
    } // namespace ShaderID_CharacterAnimationSimple
} // namespace app::classes::types
