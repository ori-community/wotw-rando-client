#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Gradients_Rainbow {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CameraFilterPack_Gradients_Rainbow__Class** type_info;
        inline app::ShaderID_CameraFilterPack_Gradients_Rainbow__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Gradients_Rainbow__Class>(type_info, "", "ShaderID_CameraFilterPack_Gradients_Rainbow");
        }
        inline app::ShaderID_CameraFilterPack_Gradients_Rainbow* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Gradients_Rainbow>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Gradients_Rainbow
} // namespace app::classes::types
