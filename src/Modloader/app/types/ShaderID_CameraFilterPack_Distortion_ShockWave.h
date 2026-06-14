#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Distortion_ShockWave.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Distortion_ShockWave__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Distortion_ShockWave {
        inline app::ShaderID_CameraFilterPack_Distortion_ShockWave__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Distortion_ShockWave__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Distortion_ShockWave__Class**)(modloader::win::memory::resolve_rva(0x04766B80));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Distortion_ShockWave__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Distortion_ShockWave__Class>(type_info(), "", "ShaderID_CameraFilterPack_Distortion_ShockWave");
        }
        inline app::ShaderID_CameraFilterPack_Distortion_ShockWave* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Distortion_ShockWave>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Distortion_ShockWave
} // namespace app::classes::types
