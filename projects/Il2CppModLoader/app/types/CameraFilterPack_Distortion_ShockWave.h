#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_ShockWave {
        inline app::CameraFilterPack_Distortion_ShockWave__Class** type_info = (app::CameraFilterPack_Distortion_ShockWave__Class**)(modloader::win::memory::resolve_rva(0x0477F3D8));
        inline app::CameraFilterPack_Distortion_ShockWave__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_ShockWave__Class>(type_info, "", "CameraFilterPack_Distortion_ShockWave");
        }
        inline app::CameraFilterPack_Distortion_ShockWave* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_ShockWave>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_ShockWave
} // namespace app::classes::types
