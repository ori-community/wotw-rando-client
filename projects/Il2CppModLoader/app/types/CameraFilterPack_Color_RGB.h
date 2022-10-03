#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Color_RGB {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Color_RGB__Class** type_info;
        inline app::CameraFilterPack_Color_RGB__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Color_RGB__Class>(type_info, "", "CameraFilterPack_Color_RGB");
        }
        inline app::CameraFilterPack_Color_RGB* create() {
            return il2cpp::create_object<app::CameraFilterPack_Color_RGB>(get_class());
        }
    } // namespace CameraFilterPack_Color_RGB
} // namespace app::classes::types
