#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Colors_NewPosterize {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Colors_NewPosterize__Class** type_info;
        inline app::CameraFilterPack_Colors_NewPosterize__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Colors_NewPosterize__Class>(type_info, "", "CameraFilterPack_Colors_NewPosterize");
        }
        inline app::CameraFilterPack_Colors_NewPosterize* create() {
            return il2cpp::create_object<app::CameraFilterPack_Colors_NewPosterize>(get_class());
        }
    } // namespace CameraFilterPack_Colors_NewPosterize
} // namespace app::classes::types
