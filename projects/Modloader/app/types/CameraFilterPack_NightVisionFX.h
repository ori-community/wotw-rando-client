#pragma once
#include <Modloader/app/structs/CameraFilterPack_NightVisionFX.h>
#include <Modloader/app/structs/CameraFilterPack_NightVisionFX__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_NightVisionFX {
        inline app::CameraFilterPack_NightVisionFX__Class** type_info() {
            static app::CameraFilterPack_NightVisionFX__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_NightVisionFX__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_NightVisionFX__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_NightVisionFX__Class>(type_info(), "", "CameraFilterPack_NightVisionFX");
        }
        inline app::CameraFilterPack_NightVisionFX* create() {
            return il2cpp::create_object<app::CameraFilterPack_NightVisionFX>(get_class());
        }
    } // namespace CameraFilterPack_NightVisionFX
} // namespace app::classes::types
