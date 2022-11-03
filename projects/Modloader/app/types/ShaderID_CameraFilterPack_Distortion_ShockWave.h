#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Distortion_ShockWave {
        inline app::ShaderID_CameraFilterPack_Distortion_ShockWave__Class** type_info = (app::ShaderID_CameraFilterPack_Distortion_ShockWave__Class**)(modloader::win::memory::resolve_rva(0x04766B80));
        inline app::ShaderID_CameraFilterPack_Distortion_ShockWave__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Distortion_ShockWave__Class>(type_info, "", "ShaderID_CameraFilterPack_Distortion_ShockWave");
        }
        inline app::ShaderID_CameraFilterPack_Distortion_ShockWave* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Distortion_ShockWave>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Distortion_ShockWave
} // namespace app::classes::types
