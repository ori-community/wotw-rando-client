#pragma once
#include <Modloader/app/structs/CameraFilterPack_Color_Sepia.h>
#include <Modloader/app/structs/CameraFilterPack_Color_Sepia__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Color_Sepia {
        inline app::CameraFilterPack_Color_Sepia__Class** type_info() {
            static app::CameraFilterPack_Color_Sepia__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_Color_Sepia__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_Color_Sepia__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Color_Sepia__Class>(type_info(), "", "CameraFilterPack_Color_Sepia");
        }
        inline app::CameraFilterPack_Color_Sepia* create() {
            return il2cpp::create_object<app::CameraFilterPack_Color_Sepia>(get_class());
        }
    } // namespace CameraFilterPack_Color_Sepia
} // namespace app::classes::types
