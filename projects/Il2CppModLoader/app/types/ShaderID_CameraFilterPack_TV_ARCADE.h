#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_TV_ARCADE {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CameraFilterPack_TV_ARCADE__Class** type_info;
        inline app::ShaderID_CameraFilterPack_TV_ARCADE__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_TV_ARCADE__Class>(type_info, "", "ShaderID_CameraFilterPack_TV_ARCADE");
        }
        inline app::ShaderID_CameraFilterPack_TV_ARCADE* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_TV_ARCADE>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_TV_ARCADE
} // namespace app::classes::types
