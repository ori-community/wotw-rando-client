#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Color_BrightContrastSaturation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Color_BrightContrastSaturation__Class** type_info;
        inline app::CameraFilterPack_Color_BrightContrastSaturation__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Color_BrightContrastSaturation__Class>(type_info, "", "CameraFilterPack_Color_BrightContrastSaturation");
        }
        inline app::CameraFilterPack_Color_BrightContrastSaturation* create() {
            return il2cpp::create_object<app::CameraFilterPack_Color_BrightContrastSaturation>(get_class());
        }
    } // namespace CameraFilterPack_Color_BrightContrastSaturation
} // namespace app::classes::types
