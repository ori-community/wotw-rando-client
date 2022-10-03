#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_FX_superDot {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CameraFilterPack_FX_superDot__Class** type_info;
        inline app::ShaderID_CameraFilterPack_FX_superDot__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_FX_superDot__Class>(type_info, "", "ShaderID_CameraFilterPack_FX_superDot");
        }
        inline app::ShaderID_CameraFilterPack_FX_superDot* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_FX_superDot>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_FX_superDot
} // namespace app::classes::types
