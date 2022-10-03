#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blend2Camera_Exclusion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CameraFilterPack_Blend2Camera_Exclusion__Class** type_info;
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Exclusion__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blend2Camera_Exclusion__Class>(type_info, "", "ShaderID_CameraFilterPack_Blend2Camera_Exclusion");
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Exclusion* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blend2Camera_Exclusion>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blend2Camera_Exclusion
} // namespace app::classes::types
