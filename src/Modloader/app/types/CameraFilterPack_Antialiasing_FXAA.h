#pragma once
#include <Modloader/app/structs/CameraFilterPack_Antialiasing_FXAA.h>
#include <Modloader/app/structs/CameraFilterPack_Antialiasing_FXAA__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Antialiasing_FXAA {
        inline app::CameraFilterPack_Antialiasing_FXAA__Class** type_info() {
            static app::CameraFilterPack_Antialiasing_FXAA__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_Antialiasing_FXAA__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_Antialiasing_FXAA__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Antialiasing_FXAA__Class>(type_info(), "", "CameraFilterPack_Antialiasing_FXAA");
        }
        inline app::CameraFilterPack_Antialiasing_FXAA* create() {
            return il2cpp::create_object<app::CameraFilterPack_Antialiasing_FXAA>(get_class());
        }
    } // namespace CameraFilterPack_Antialiasing_FXAA
} // namespace app::classes::types
