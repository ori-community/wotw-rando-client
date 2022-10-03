#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_Radial_Fast {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Blur_Radial_Fast__Class** type_info;
        inline app::CameraFilterPack_Blur_Radial_Fast__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_Radial_Fast__Class>(type_info, "", "CameraFilterPack_Blur_Radial_Fast");
        }
        inline app::CameraFilterPack_Blur_Radial_Fast* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_Radial_Fast>(get_class());
        }
    } // namespace CameraFilterPack_Blur_Radial_Fast
} // namespace app::classes::types
