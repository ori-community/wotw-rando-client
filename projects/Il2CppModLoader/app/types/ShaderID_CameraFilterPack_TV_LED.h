#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_LED {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CameraFilterPack_TV_LED__Class** type_info;
        inline app::ShaderID_CameraFilterPack_TV_LED__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_LED__Class>(type_info, "", "ShaderID_CameraFilterPack_TV_LED");
        }
        inline app::ShaderID_CameraFilterPack_TV_LED* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_LED>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_LED
} // namespace app::classes::types
