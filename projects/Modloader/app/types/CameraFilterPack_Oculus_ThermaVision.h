#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Oculus_ThermaVision {
        inline app::CameraFilterPack_Oculus_ThermaVision__Class** type_info = (app::CameraFilterPack_Oculus_ThermaVision__Class**)(modloader::win::memory::resolve_rva(0x047229B0));
        inline app::CameraFilterPack_Oculus_ThermaVision__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Oculus_ThermaVision__Class>(type_info, "", "CameraFilterPack_Oculus_ThermaVision");
        }
        inline app::CameraFilterPack_Oculus_ThermaVision* create() {
            return il2cpp::create_object<app::CameraFilterPack_Oculus_ThermaVision>(get_class());
        }
    } // namespace CameraFilterPack_Oculus_ThermaVision
} // namespace app::classes::types
