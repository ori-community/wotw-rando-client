#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_Focus {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Blur_Focus__Class** type_info;
        inline app::CameraFilterPack_Blur_Focus__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_Focus__Class>(type_info, "", "CameraFilterPack_Blur_Focus");
        }
        inline app::CameraFilterPack_Blur_Focus* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_Focus>(get_class());
        }
    } // namespace CameraFilterPack_Blur_Focus
} // namespace app::classes::types
