#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Edge_Sobel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CameraFilterPack_Edge_Sobel__Class** type_info;
        inline app::ShaderID_CameraFilterPack_Edge_Sobel__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Edge_Sobel__Class>(type_info, "", "ShaderID_CameraFilterPack_Edge_Sobel");
        }
        inline app::ShaderID_CameraFilterPack_Edge_Sobel* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Edge_Sobel>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Edge_Sobel
} // namespace app::classes::types
