#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Oculus_NightVision2.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Oculus_NightVision2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Oculus_NightVision2 {
        inline app::ShaderID_CameraFilterPack_Oculus_NightVision2__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Oculus_NightVision2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Oculus_NightVision2__Class**)(modloader::win::memory::resolve_rva(0x047350B8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Oculus_NightVision2__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Oculus_NightVision2__Class>(type_info(), "", "ShaderID_CameraFilterPack_Oculus_NightVision2");
        }
        inline app::ShaderID_CameraFilterPack_Oculus_NightVision2* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Oculus_NightVision2>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Oculus_NightVision2
} // namespace app::classes::types
