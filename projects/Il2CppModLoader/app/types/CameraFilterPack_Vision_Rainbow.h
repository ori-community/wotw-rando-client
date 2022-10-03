#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Vision_Rainbow {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Vision_Rainbow__Class** type_info;
        inline app::CameraFilterPack_Vision_Rainbow__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Vision_Rainbow__Class>(type_info, "", "CameraFilterPack_Vision_Rainbow");
        }
        inline app::CameraFilterPack_Vision_Rainbow* create() {
            return il2cpp::create_object<app::CameraFilterPack_Vision_Rainbow>(get_class());
        }
    } // namespace CameraFilterPack_Vision_Rainbow
} // namespace app::classes::types
