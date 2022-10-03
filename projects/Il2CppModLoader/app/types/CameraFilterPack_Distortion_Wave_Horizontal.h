#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_Wave_Horizontal {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Distortion_Wave_Horizontal__Class** type_info;
        inline app::CameraFilterPack_Distortion_Wave_Horizontal__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_Wave_Horizontal__Class>(type_info, "", "CameraFilterPack_Distortion_Wave_Horizontal");
        }
        inline app::CameraFilterPack_Distortion_Wave_Horizontal* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_Wave_Horizontal>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_Wave_Horizontal
} // namespace app::classes::types
