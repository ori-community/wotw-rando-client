#pragma once
#include <Modloader/app/structs/CameraFilterPack_Vision_Blood_Fast.h>
#include <Modloader/app/structs/CameraFilterPack_Vision_Blood_Fast__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Vision_Blood_Fast {
        inline app::CameraFilterPack_Vision_Blood_Fast__Class** type_info() {
            static app::CameraFilterPack_Vision_Blood_Fast__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_Vision_Blood_Fast__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_Vision_Blood_Fast__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Vision_Blood_Fast__Class>(type_info(), "", "CameraFilterPack_Vision_Blood_Fast");
        }
        inline app::CameraFilterPack_Vision_Blood_Fast* create() {
            return il2cpp::create_object<app::CameraFilterPack_Vision_Blood_Fast>(get_class());
        }
    } // namespace CameraFilterPack_Vision_Blood_Fast
} // namespace app::classes::types
