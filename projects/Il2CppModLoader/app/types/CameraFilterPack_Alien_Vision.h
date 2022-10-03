#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Alien_Vision {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Alien_Vision__Class** type_info;
        inline app::CameraFilterPack_Alien_Vision__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Alien_Vision__Class>(type_info, "", "CameraFilterPack_Alien_Vision");
        }
        inline app::CameraFilterPack_Alien_Vision* create() {
            return il2cpp::create_object<app::CameraFilterPack_Alien_Vision>(get_class());
        }
    } // namespace CameraFilterPack_Alien_Vision
} // namespace app::classes::types
