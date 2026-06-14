#pragma once
#include <Modloader/app/structs/CameraFilterPack_Color_Invert.h>
#include <Modloader/app/structs/CameraFilterPack_Color_Invert__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Color_Invert {
        inline app::CameraFilterPack_Color_Invert__Class** type_info() {
            static app::CameraFilterPack_Color_Invert__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_Color_Invert__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_Color_Invert__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Color_Invert__Class>(type_info(), "", "CameraFilterPack_Color_Invert");
        }
        inline app::CameraFilterPack_Color_Invert* create() {
            return il2cpp::create_object<app::CameraFilterPack_Color_Invert>(get_class());
        }
    } // namespace CameraFilterPack_Color_Invert
} // namespace app::classes::types
