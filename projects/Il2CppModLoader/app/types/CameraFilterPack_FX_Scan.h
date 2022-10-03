#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Scan {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_FX_Scan__Class** type_info;
        inline app::CameraFilterPack_FX_Scan__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Scan__Class>(type_info, "", "CameraFilterPack_FX_Scan");
        }
        inline app::CameraFilterPack_FX_Scan* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Scan>(get_class());
        }
    } // namespace CameraFilterPack_FX_Scan
} // namespace app::classes::types
