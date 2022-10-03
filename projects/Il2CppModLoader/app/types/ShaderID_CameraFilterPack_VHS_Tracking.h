#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_VHS_Tracking {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CameraFilterPack_VHS_Tracking__Class** type_info;
        inline app::ShaderID_CameraFilterPack_VHS_Tracking__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_VHS_Tracking__Class>(type_info, "", "ShaderID_CameraFilterPack_VHS_Tracking");
        }
        inline app::ShaderID_CameraFilterPack_VHS_Tracking* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_VHS_Tracking>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_VHS_Tracking
} // namespace app::classes::types
