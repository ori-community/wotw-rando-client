#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Distortion_Half_Sphere {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CameraFilterPack_Distortion_Half_Sphere__Class** type_info;
        inline app::ShaderID_CameraFilterPack_Distortion_Half_Sphere__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Distortion_Half_Sphere__Class>(type_info, "", "ShaderID_CameraFilterPack_Distortion_Half_Sphere");
        }
        inline app::ShaderID_CameraFilterPack_Distortion_Half_Sphere* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Distortion_Half_Sphere>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Distortion_Half_Sphere
} // namespace app::classes::types
