#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Sharpen_Sharpen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Sharpen_Sharpen__Class** type_info;
        inline app::CameraFilterPack_Sharpen_Sharpen__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Sharpen_Sharpen__Class>(type_info, "", "CameraFilterPack_Sharpen_Sharpen");
        }
        inline app::CameraFilterPack_Sharpen_Sharpen* create() {
            return il2cpp::create_object<app::CameraFilterPack_Sharpen_Sharpen>(get_class());
        }
    } // namespace CameraFilterPack_Sharpen_Sharpen
} // namespace app::classes::types
