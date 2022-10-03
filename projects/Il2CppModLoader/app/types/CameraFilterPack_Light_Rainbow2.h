#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Light_Rainbow2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Light_Rainbow2__Class** type_info;
        inline app::CameraFilterPack_Light_Rainbow2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Light_Rainbow2__Class>(type_info, "", "CameraFilterPack_Light_Rainbow2");
        }
        inline app::CameraFilterPack_Light_Rainbow2* create() {
            return il2cpp::create_object<app::CameraFilterPack_Light_Rainbow2>(get_class());
        }
    } // namespace CameraFilterPack_Light_Rainbow2
} // namespace app::classes::types
