#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_Noise {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Blur_Noise__Class** type_info;
        inline app::CameraFilterPack_Blur_Noise__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_Noise__Class>(type_info, "", "CameraFilterPack_Blur_Noise");
        }
        inline app::CameraFilterPack_Blur_Noise* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_Noise>(get_class());
        }
    } // namespace CameraFilterPack_Blur_Noise
} // namespace app::classes::types
