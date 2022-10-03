#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_FX_Drunk {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CameraFilterPack_FX_Drunk__Class** type_info;
        inline app::ShaderID_CameraFilterPack_FX_Drunk__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_FX_Drunk__Class>(type_info, "", "ShaderID_CameraFilterPack_FX_Drunk");
        }
        inline app::ShaderID_CameraFilterPack_FX_Drunk* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_FX_Drunk>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_FX_Drunk
} // namespace app::classes::types
