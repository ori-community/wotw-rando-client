#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Noise_TV {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Noise_TV__Class** type_info;
        inline app::CameraFilterPack_Noise_TV__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Noise_TV__Class>(type_info, "", "CameraFilterPack_Noise_TV");
        }
        inline app::CameraFilterPack_Noise_TV* create() {
            return il2cpp::create_object<app::CameraFilterPack_Noise_TV>(get_class());
        }
    } // namespace CameraFilterPack_Noise_TV
} // namespace app::classes::types
