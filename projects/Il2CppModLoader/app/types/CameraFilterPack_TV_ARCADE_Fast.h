#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_ARCADE_Fast {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_TV_ARCADE_Fast__Class** type_info;
        inline app::CameraFilterPack_TV_ARCADE_Fast__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_ARCADE_Fast__Class>(type_info, "", "CameraFilterPack_TV_ARCADE_Fast");
        }
        inline app::CameraFilterPack_TV_ARCADE_Fast* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_ARCADE_Fast>(get_class());
        }
    } // namespace CameraFilterPack_TV_ARCADE_Fast
} // namespace app::classes::types
