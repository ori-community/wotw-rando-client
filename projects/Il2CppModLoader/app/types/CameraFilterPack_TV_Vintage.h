#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Vintage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_TV_Vintage__Class** type_info;
        inline app::CameraFilterPack_TV_Vintage__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Vintage__Class>(type_info, "", "CameraFilterPack_TV_Vintage");
        }
        inline app::CameraFilterPack_TV_Vintage* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Vintage>(get_class());
        }
    } // namespace CameraFilterPack_TV_Vintage
} // namespace app::classes::types
