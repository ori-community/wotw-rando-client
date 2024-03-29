#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Oculus_NightVision3.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Oculus_NightVision3__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Oculus_NightVision3 {
        inline app::ShaderID_CameraFilterPack_Oculus_NightVision3__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Oculus_NightVision3__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Oculus_NightVision3__Class**)(modloader::win::memory::resolve_rva(0x0470DA80));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Oculus_NightVision3__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Oculus_NightVision3__Class>(type_info(), "", "ShaderID_CameraFilterPack_Oculus_NightVision3");
        }
        inline app::ShaderID_CameraFilterPack_Oculus_NightVision3* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Oculus_NightVision3>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Oculus_NightVision3
} // namespace app::classes::types
