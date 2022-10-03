#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Pixelisation_Dot {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Pixelisation_Dot__Class** type_info;
        inline app::CameraFilterPack_Pixelisation_Dot__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Pixelisation_Dot__Class>(type_info, "", "CameraFilterPack_Pixelisation_Dot");
        }
        inline app::CameraFilterPack_Pixelisation_Dot* create() {
            return il2cpp::create_object<app::CameraFilterPack_Pixelisation_Dot>(get_class());
        }
    } // namespace CameraFilterPack_Pixelisation_Dot
} // namespace app::classes::types
