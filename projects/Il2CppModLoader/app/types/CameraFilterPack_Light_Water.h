#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Light_Water {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Light_Water__Class** type_info;
        inline app::CameraFilterPack_Light_Water__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Light_Water__Class>(type_info, "", "CameraFilterPack_Light_Water");
        }
        inline app::CameraFilterPack_Light_Water* create() {
            return il2cpp::create_object<app::CameraFilterPack_Light_Water>(get_class());
        }
    } // namespace CameraFilterPack_Light_Water
} // namespace app::classes::types
