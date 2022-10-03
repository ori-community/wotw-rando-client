#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Vision_Tunnel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Vision_Tunnel__Class** type_info;
        inline app::CameraFilterPack_Vision_Tunnel__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Vision_Tunnel__Class>(type_info, "", "CameraFilterPack_Vision_Tunnel");
        }
        inline app::CameraFilterPack_Vision_Tunnel* create() {
            return il2cpp::create_object<app::CameraFilterPack_Vision_Tunnel>(get_class());
        }
    } // namespace CameraFilterPack_Vision_Tunnel
} // namespace app::classes::types
