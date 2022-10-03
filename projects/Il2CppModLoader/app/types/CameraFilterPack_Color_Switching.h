#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Color_Switching {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Color_Switching__Class** type_info;
        inline app::CameraFilterPack_Color_Switching__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Color_Switching__Class>(type_info, "", "CameraFilterPack_Color_Switching");
        }
        inline app::CameraFilterPack_Color_Switching* create() {
            return il2cpp::create_object<app::CameraFilterPack_Color_Switching>(get_class());
        }
    } // namespace CameraFilterPack_Color_Switching
} // namespace app::classes::types
