#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_VHS_Tracking {
        inline app::CameraFilterPack_VHS_Tracking__Class** type_info = (app::CameraFilterPack_VHS_Tracking__Class**)(modloader::win::memory::resolve_rva(0x04709DC8));
        inline app::CameraFilterPack_VHS_Tracking__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_VHS_Tracking__Class>(type_info, "", "CameraFilterPack_VHS_Tracking");
        }
        inline app::CameraFilterPack_VHS_Tracking* create() {
            return il2cpp::create_object<app::CameraFilterPack_VHS_Tracking>(get_class());
        }
    } // namespace CameraFilterPack_VHS_Tracking
} // namespace app::classes::types
