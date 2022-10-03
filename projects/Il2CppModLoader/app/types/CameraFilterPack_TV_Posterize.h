#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Posterize {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_TV_Posterize__Class** type_info;
        inline app::CameraFilterPack_TV_Posterize__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Posterize__Class>(type_info, "", "CameraFilterPack_TV_Posterize");
        }
        inline app::CameraFilterPack_TV_Posterize* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Posterize>(get_class());
        }
    } // namespace CameraFilterPack_TV_Posterize
} // namespace app::classes::types
