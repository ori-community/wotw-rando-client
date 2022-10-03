#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Edge_BlackLine {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CameraFilterPack_Edge_BlackLine__Class** type_info;
        inline app::ShaderID_CameraFilterPack_Edge_BlackLine__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Edge_BlackLine__Class>(type_info, "", "ShaderID_CameraFilterPack_Edge_BlackLine");
        }
        inline app::ShaderID_CameraFilterPack_Edge_BlackLine* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Edge_BlackLine>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Edge_BlackLine
} // namespace app::classes::types
