#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blur_Regular {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CameraFilterPack_Blur_Regular__Class** type_info;
        inline app::ShaderID_CameraFilterPack_Blur_Regular__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blur_Regular__Class>(type_info, "", "ShaderID_CameraFilterPack_Blur_Regular");
        }
        inline app::ShaderID_CameraFilterPack_Blur_Regular* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blur_Regular>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blur_Regular
} // namespace app::classes::types
