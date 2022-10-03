#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Distorted {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_TV_Distorted__Class** type_info;
        inline app::CameraFilterPack_TV_Distorted__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Distorted__Class>(type_info, "", "CameraFilterPack_TV_Distorted");
        }
        inline app::CameraFilterPack_TV_Distorted* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Distorted>(get_class());
        }
    } // namespace CameraFilterPack_TV_Distorted
} // namespace app::classes::types
