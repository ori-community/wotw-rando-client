#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_Noise {
        inline app::CameraFilterPack_Distortion_Noise__Class** type_info = (app::CameraFilterPack_Distortion_Noise__Class**)(modloader::win::memory::resolve_rva(0x04799098));
        inline app::CameraFilterPack_Distortion_Noise__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_Noise__Class>(type_info, "", "CameraFilterPack_Distortion_Noise");
        }
        inline app::CameraFilterPack_Distortion_Noise* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_Noise>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_Noise
} // namespace app::classes::types
