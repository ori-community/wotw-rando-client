#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Color_YUV {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Color_YUV__Class** type_info;
        inline app::CameraFilterPack_Color_YUV__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Color_YUV__Class>(type_info, "", "CameraFilterPack_Color_YUV");
        }
        inline app::CameraFilterPack_Color_YUV* create() {
            return il2cpp::create_object<app::CameraFilterPack_Color_YUV>(get_class());
        }
    } // namespace CameraFilterPack_Color_YUV
} // namespace app::classes::types
