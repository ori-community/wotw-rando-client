#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_MotionAbsorbCharacter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_MotionAbsorbCharacter__Class** type_info;
        inline app::ShaderID_MotionAbsorbCharacter__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_MotionAbsorbCharacter__Class>(type_info, "RootMotion.Demos", "ShaderID_MotionAbsorbCharacter");
        }
        inline app::ShaderID_MotionAbsorbCharacter* create() {
            return il2cpp::create_object<app::ShaderID_MotionAbsorbCharacter>(get_class());
        }
    } // namespace ShaderID_MotionAbsorbCharacter
} // namespace app::classes::types
