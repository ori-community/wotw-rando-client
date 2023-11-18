#pragma once
#include <Modloader/app/structs/CameraFilterPack_Distortion_FishEye.h>
#include <Modloader/app/structs/CameraFilterPack_Distortion_FishEye__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_FishEye {
        inline app::CameraFilterPack_Distortion_FishEye__Class** type_info() {
            static app::CameraFilterPack_Distortion_FishEye__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Distortion_FishEye__Class**)(modloader::win::memory::resolve_rva(0x04757D38));
            }
            return cache;
        }
        inline app::CameraFilterPack_Distortion_FishEye__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_FishEye__Class>(type_info(), "", "CameraFilterPack_Distortion_FishEye");
        }
        inline app::CameraFilterPack_Distortion_FishEye* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_FishEye>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_FishEye
} // namespace app::classes::types
