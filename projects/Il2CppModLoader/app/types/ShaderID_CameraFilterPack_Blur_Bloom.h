#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blur_Bloom {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CameraFilterPack_Blur_Bloom__Class** type_info;
        inline app::ShaderID_CameraFilterPack_Blur_Bloom__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blur_Bloom__Class>(type_info, "", "ShaderID_CameraFilterPack_Blur_Bloom");
        }
        inline app::ShaderID_CameraFilterPack_Blur_Bloom* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blur_Bloom>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blur_Bloom
} // namespace app::classes::types
