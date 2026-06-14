#pragma once
#include <Modloader/app/structs/CameraFilterPack_TV_LED.h>
#include <Modloader/app/structs/CameraFilterPack_TV_LED__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_LED {
        inline app::CameraFilterPack_TV_LED__Class** type_info() {
            static app::CameraFilterPack_TV_LED__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_TV_LED__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_TV_LED__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_LED__Class>(type_info(), "", "CameraFilterPack_TV_LED");
        }
        inline app::CameraFilterPack_TV_LED* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_LED>(get_class());
        }
    } // namespace CameraFilterPack_TV_LED
} // namespace app::classes::types
