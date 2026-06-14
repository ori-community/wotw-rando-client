#pragma once
#include <Modloader/app/structs/CameraFilterPack_Oculus_ThermaVision.h>
#include <Modloader/app/structs/CameraFilterPack_Oculus_ThermaVision__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Oculus_ThermaVision {
        inline app::CameraFilterPack_Oculus_ThermaVision__Class** type_info() {
            static app::CameraFilterPack_Oculus_ThermaVision__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Oculus_ThermaVision__Class**)(modloader::win::memory::resolve_rva(0x047229B0));
            }
            return cache;
        }
        inline app::CameraFilterPack_Oculus_ThermaVision__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Oculus_ThermaVision__Class>(type_info(), "", "CameraFilterPack_Oculus_ThermaVision");
        }
        inline app::CameraFilterPack_Oculus_ThermaVision* create() {
            return il2cpp::create_object<app::CameraFilterPack_Oculus_ThermaVision>(get_class());
        }
    } // namespace CameraFilterPack_Oculus_ThermaVision
} // namespace app::classes::types
