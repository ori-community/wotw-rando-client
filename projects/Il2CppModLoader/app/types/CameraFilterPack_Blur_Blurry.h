#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_Blurry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Blur_Blurry__Class** type_info;
        inline app::CameraFilterPack_Blur_Blurry__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_Blurry__Class>(type_info, "", "CameraFilterPack_Blur_Blurry");
        }
        inline app::CameraFilterPack_Blur_Blurry* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_Blurry>(get_class());
        }
    } // namespace CameraFilterPack_Blur_Blurry
} // namespace app::classes::types
