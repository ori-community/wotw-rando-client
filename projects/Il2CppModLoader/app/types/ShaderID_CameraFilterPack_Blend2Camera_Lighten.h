#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blend2Camera_Lighten {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CameraFilterPack_Blend2Camera_Lighten__Class** type_info;
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Lighten__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blend2Camera_Lighten__Class>(type_info, "", "ShaderID_CameraFilterPack_Blend2Camera_Lighten");
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Lighten* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blend2Camera_Lighten>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blend2Camera_Lighten
} // namespace app::classes::types
