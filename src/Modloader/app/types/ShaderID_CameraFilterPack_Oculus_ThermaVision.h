#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Oculus_ThermaVision.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Oculus_ThermaVision__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Oculus_ThermaVision {
        inline app::ShaderID_CameraFilterPack_Oculus_ThermaVision__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Oculus_ThermaVision__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Oculus_ThermaVision__Class**)(modloader::win::memory::resolve_rva(0x04705E88));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Oculus_ThermaVision__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Oculus_ThermaVision__Class>(type_info(), "", "ShaderID_CameraFilterPack_Oculus_ThermaVision");
        }
        inline app::ShaderID_CameraFilterPack_Oculus_ThermaVision* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Oculus_ThermaVision>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Oculus_ThermaVision
} // namespace app::classes::types
