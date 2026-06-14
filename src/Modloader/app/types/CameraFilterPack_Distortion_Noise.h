#pragma once
#include <Modloader/app/structs/CameraFilterPack_Distortion_Noise.h>
#include <Modloader/app/structs/CameraFilterPack_Distortion_Noise__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_Noise {
        inline app::CameraFilterPack_Distortion_Noise__Class** type_info() {
            static app::CameraFilterPack_Distortion_Noise__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Distortion_Noise__Class**)(modloader::win::memory::resolve_rva(0x04799098));
            }
            return cache;
        }
        inline app::CameraFilterPack_Distortion_Noise__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_Noise__Class>(type_info(), "", "CameraFilterPack_Distortion_Noise");
        }
        inline app::CameraFilterPack_Distortion_Noise* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_Noise>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_Noise
} // namespace app::classes::types
