#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_FishEye {
        inline app::CameraFilterPack_Distortion_FishEye__Class** type_info = (app::CameraFilterPack_Distortion_FishEye__Class**)(modloader::win::memory::resolve_rva(0x04757D38));
        inline app::CameraFilterPack_Distortion_FishEye__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_FishEye__Class>(type_info, "", "CameraFilterPack_Distortion_FishEye");
        }
        inline app::CameraFilterPack_Distortion_FishEye* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_FishEye>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_FishEye
} // namespace app::classes::types
