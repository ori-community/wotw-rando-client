#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Gradients_NeonGradient {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CameraFilterPack_Gradients_NeonGradient__Class** type_info;
        inline app::ShaderID_CameraFilterPack_Gradients_NeonGradient__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Gradients_NeonGradient__Class>(type_info, "", "ShaderID_CameraFilterPack_Gradients_NeonGradient");
        }
        inline app::ShaderID_CameraFilterPack_Gradients_NeonGradient* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Gradients_NeonGradient>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Gradients_NeonGradient
} // namespace app::classes::types
