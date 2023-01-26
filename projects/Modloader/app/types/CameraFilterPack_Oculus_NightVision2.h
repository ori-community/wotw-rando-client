#pragma once
#include <Modloader/app/structs/CameraFilterPack_Oculus_NightVision2.h>
#include <Modloader/app/structs/CameraFilterPack_Oculus_NightVision2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Oculus_NightVision2 {
        inline app::CameraFilterPack_Oculus_NightVision2__Class** type_info() {
            static app::CameraFilterPack_Oculus_NightVision2__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_Oculus_NightVision2__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_Oculus_NightVision2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Oculus_NightVision2__Class>(type_info(), "", "CameraFilterPack_Oculus_NightVision2");
        }
        inline app::CameraFilterPack_Oculus_NightVision2* create() {
            return il2cpp::create_object<app::CameraFilterPack_Oculus_NightVision2>(get_class());
        }
    } // namespace CameraFilterPack_Oculus_NightVision2
} // namespace app::classes::types
