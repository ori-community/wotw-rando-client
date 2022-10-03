#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Vision_Aura {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Vision_Aura__Class** type_info;
        inline app::CameraFilterPack_Vision_Aura__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Vision_Aura__Class>(type_info, "", "CameraFilterPack_Vision_Aura");
        }
        inline app::CameraFilterPack_Vision_Aura* create() {
            return il2cpp::create_object<app::CameraFilterPack_Vision_Aura>(get_class());
        }
    } // namespace CameraFilterPack_Vision_Aura
} // namespace app::classes::types
