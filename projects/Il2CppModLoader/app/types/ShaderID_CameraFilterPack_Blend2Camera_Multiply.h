#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blend2Camera_Multiply {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CameraFilterPack_Blend2Camera_Multiply__Class** type_info;
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Multiply__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blend2Camera_Multiply__Class>(type_info, "", "ShaderID_CameraFilterPack_Blend2Camera_Multiply");
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Multiply* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blend2Camera_Multiply>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blend2Camera_Multiply
} // namespace app::classes::types
