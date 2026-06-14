#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Distortion_Wave_Horizontal.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Distortion_Wave_Horizontal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Distortion_Wave_Horizontal {
        inline app::ShaderID_CameraFilterPack_Distortion_Wave_Horizontal__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Distortion_Wave_Horizontal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Distortion_Wave_Horizontal__Class**)(modloader::win::memory::resolve_rva(0x04771D68));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Distortion_Wave_Horizontal__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Distortion_Wave_Horizontal__Class>(type_info(), "", "ShaderID_CameraFilterPack_Distortion_Wave_Horizontal");
        }
        inline app::ShaderID_CameraFilterPack_Distortion_Wave_Horizontal* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Distortion_Wave_Horizontal>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Distortion_Wave_Horizontal
} // namespace app::classes::types
