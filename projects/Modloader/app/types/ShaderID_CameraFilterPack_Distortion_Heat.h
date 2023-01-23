#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Distortion_Heat__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Distortion_Heat.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Distortion_Heat {
        inline app::ShaderID_CameraFilterPack_Distortion_Heat__Class** type_info = (app::ShaderID_CameraFilterPack_Distortion_Heat__Class**)(modloader::win::memory::resolve_rva(0x047112C0));
        inline app::ShaderID_CameraFilterPack_Distortion_Heat__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Distortion_Heat__Class>(type_info, "", "ShaderID_CameraFilterPack_Distortion_Heat");
        }
        inline app::ShaderID_CameraFilterPack_Distortion_Heat* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Distortion_Heat>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Distortion_Heat
} // namespace app::classes::types
