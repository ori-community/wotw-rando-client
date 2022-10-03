#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Noise {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_TV_Noise__Class** type_info;
        inline app::CameraFilterPack_TV_Noise__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Noise__Class>(type_info, "", "CameraFilterPack_TV_Noise");
        }
        inline app::CameraFilterPack_TV_Noise* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Noise>(get_class());
        }
    } // namespace CameraFilterPack_TV_Noise
} // namespace app::classes::types
