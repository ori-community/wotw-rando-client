#pragma once
#include <Modloader/app/structs/CameraFilterPack_NightVision_4.h>
#include <Modloader/app/structs/CameraFilterPack_NightVision_4__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_NightVision_4 {
        inline app::CameraFilterPack_NightVision_4__Class** type_info() {
            static app::CameraFilterPack_NightVision_4__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_NightVision_4__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_NightVision_4__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_NightVision_4__Class>(type_info(), "", "CameraFilterPack_NightVision_4");
        }
        inline app::CameraFilterPack_NightVision_4* create() {
            return il2cpp::create_object<app::CameraFilterPack_NightVision_4>(get_class());
        }
    } // namespace CameraFilterPack_NightVision_4
} // namespace app::classes::types
