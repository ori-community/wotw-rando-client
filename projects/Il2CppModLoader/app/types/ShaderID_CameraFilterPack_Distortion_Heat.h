#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Distortion_Heat {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CameraFilterPack_Distortion_Heat__Class** type_info;
        inline app::ShaderID_CameraFilterPack_Distortion_Heat__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Distortion_Heat__Class>(type_info, "", "ShaderID_CameraFilterPack_Distortion_Heat");
        }
        inline app::ShaderID_CameraFilterPack_Distortion_Heat* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Distortion_Heat>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Distortion_Heat
} // namespace app::classes::types
