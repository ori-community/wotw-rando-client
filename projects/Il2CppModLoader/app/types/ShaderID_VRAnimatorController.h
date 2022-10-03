#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_VRAnimatorController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_VRAnimatorController__Class** type_info;
        inline app::ShaderID_VRAnimatorController__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_VRAnimatorController__Class>(type_info, "RootMotion.Demos", "ShaderID_VRAnimatorController");
        }
        inline app::ShaderID_VRAnimatorController* create() {
            return il2cpp::create_object<app::ShaderID_VRAnimatorController>(get_class());
        }
    } // namespace ShaderID_VRAnimatorController
} // namespace app::classes::types
