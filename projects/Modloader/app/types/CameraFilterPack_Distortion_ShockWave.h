#pragma once
#include <Modloader/app/structs/CameraFilterPack_Distortion_ShockWave.h>
#include <Modloader/app/structs/CameraFilterPack_Distortion_ShockWave__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_ShockWave {
        inline app::CameraFilterPack_Distortion_ShockWave__Class** type_info() {
            static app::CameraFilterPack_Distortion_ShockWave__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Distortion_ShockWave__Class**)(modloader::win::memory::resolve_rva(0x0477F3D8));
            }
            return cache;
        }
        inline app::CameraFilterPack_Distortion_ShockWave__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_ShockWave__Class>(type_info(), "", "CameraFilterPack_Distortion_ShockWave");
        }
        inline app::CameraFilterPack_Distortion_ShockWave* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_ShockWave>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_ShockWave
} // namespace app::classes::types
