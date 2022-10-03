#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blend2Camera_HardLight {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CameraFilterPack_Blend2Camera_HardLight__Class** type_info;
        inline app::ShaderID_CameraFilterPack_Blend2Camera_HardLight__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blend2Camera_HardLight__Class>(type_info, "", "ShaderID_CameraFilterPack_Blend2Camera_HardLight");
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_HardLight* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blend2Camera_HardLight>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blend2Camera_HardLight
} // namespace app::classes::types
