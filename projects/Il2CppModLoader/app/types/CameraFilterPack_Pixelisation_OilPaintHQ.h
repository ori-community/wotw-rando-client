#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Pixelisation_OilPaintHQ {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Pixelisation_OilPaintHQ__Class** type_info;
        inline app::CameraFilterPack_Pixelisation_OilPaintHQ__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Pixelisation_OilPaintHQ__Class>(type_info, "", "CameraFilterPack_Pixelisation_OilPaintHQ");
        }
        inline app::CameraFilterPack_Pixelisation_OilPaintHQ* create() {
            return il2cpp::create_object<app::CameraFilterPack_Pixelisation_OilPaintHQ>(get_class());
        }
    } // namespace CameraFilterPack_Pixelisation_OilPaintHQ
} // namespace app::classes::types
