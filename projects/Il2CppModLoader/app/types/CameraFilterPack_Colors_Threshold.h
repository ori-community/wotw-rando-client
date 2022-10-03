#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Colors_Threshold {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Colors_Threshold__Class** type_info;
        inline app::CameraFilterPack_Colors_Threshold__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Colors_Threshold__Class>(type_info, "", "CameraFilterPack_Colors_Threshold");
        }
        inline app::CameraFilterPack_Colors_Threshold* create() {
            return il2cpp::create_object<app::CameraFilterPack_Colors_Threshold>(get_class());
        }
    } // namespace CameraFilterPack_Colors_Threshold
} // namespace app::classes::types
