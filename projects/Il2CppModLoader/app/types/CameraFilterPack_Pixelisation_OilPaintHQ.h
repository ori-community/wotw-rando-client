#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Pixelisation_OilPaintHQ {
        inline app::CameraFilterPack_Pixelisation_OilPaintHQ__Class** type_info = (app::CameraFilterPack_Pixelisation_OilPaintHQ__Class**)(modloader::win::memory::resolve_rva(0x0476B568));
        inline app::CameraFilterPack_Pixelisation_OilPaintHQ__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Pixelisation_OilPaintHQ__Class>(type_info, "", "CameraFilterPack_Pixelisation_OilPaintHQ");
        }
        inline app::CameraFilterPack_Pixelisation_OilPaintHQ* create() {
            return il2cpp::create_object<app::CameraFilterPack_Pixelisation_OilPaintHQ>(get_class());
        }
    } // namespace CameraFilterPack_Pixelisation_OilPaintHQ
} // namespace app::classes::types
