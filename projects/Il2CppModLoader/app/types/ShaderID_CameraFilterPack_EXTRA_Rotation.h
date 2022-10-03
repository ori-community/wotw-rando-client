#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_EXTRA_Rotation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CameraFilterPack_EXTRA_Rotation__Class** type_info;
        inline app::ShaderID_CameraFilterPack_EXTRA_Rotation__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_EXTRA_Rotation__Class>(type_info, "", "ShaderID_CameraFilterPack_EXTRA_Rotation");
        }
        inline app::ShaderID_CameraFilterPack_EXTRA_Rotation* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_EXTRA_Rotation>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_EXTRA_Rotation
} // namespace app::classes::types
