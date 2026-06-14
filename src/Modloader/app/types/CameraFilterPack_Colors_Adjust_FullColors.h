#pragma once
#include <Modloader/app/structs/CameraFilterPack_Colors_Adjust_FullColors.h>
#include <Modloader/app/structs/CameraFilterPack_Colors_Adjust_FullColors__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Colors_Adjust_FullColors {
        inline app::CameraFilterPack_Colors_Adjust_FullColors__Class** type_info() {
            static app::CameraFilterPack_Colors_Adjust_FullColors__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_Colors_Adjust_FullColors__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_Colors_Adjust_FullColors__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Colors_Adjust_FullColors__Class>(type_info(), "", "CameraFilterPack_Colors_Adjust_FullColors");
        }
        inline app::CameraFilterPack_Colors_Adjust_FullColors* create() {
            return il2cpp::create_object<app::CameraFilterPack_Colors_Adjust_FullColors>(get_class());
        }
    } // namespace CameraFilterPack_Colors_Adjust_FullColors
} // namespace app::classes::types
