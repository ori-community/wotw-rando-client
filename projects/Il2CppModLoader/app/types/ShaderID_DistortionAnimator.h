#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_DistortionAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_DistortionAnimator__Class** type_info;
        inline app::ShaderID_DistortionAnimator__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DistortionAnimator__Class>(type_info, "", "ShaderID_DistortionAnimator");
        }
        inline app::ShaderID_DistortionAnimator* create() {
            return il2cpp::create_object<app::ShaderID_DistortionAnimator>(get_class());
        }
    } // namespace ShaderID_DistortionAnimator
} // namespace app::classes::types
