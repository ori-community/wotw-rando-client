#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_AAA_Blood_Hit {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CameraFilterPack_AAA_Blood_Hit__Class** type_info;
        inline app::ShaderID_CameraFilterPack_AAA_Blood_Hit__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_AAA_Blood_Hit__Class>(type_info, "", "ShaderID_CameraFilterPack_AAA_Blood_Hit");
        }
        inline app::ShaderID_CameraFilterPack_AAA_Blood_Hit* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_AAA_Blood_Hit>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_AAA_Blood_Hit
} // namespace app::classes::types
