#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_FishEye {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Distortion_FishEye__Class** type_info;
        inline app::CameraFilterPack_Distortion_FishEye__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_FishEye__Class>(type_info, "", "CameraFilterPack_Distortion_FishEye");
        }
        inline app::CameraFilterPack_Distortion_FishEye* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_FishEye>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_FishEye
} // namespace app::classes::types
