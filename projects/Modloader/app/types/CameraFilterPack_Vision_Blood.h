#pragma once
#include <Modloader/app/structs/CameraFilterPack_Vision_Blood.h>
#include <Modloader/app/structs/CameraFilterPack_Vision_Blood__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Vision_Blood {
        inline app::CameraFilterPack_Vision_Blood__Class** type_info() {
            static app::CameraFilterPack_Vision_Blood__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraFilterPack_Vision_Blood__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraFilterPack_Vision_Blood__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Vision_Blood__Class>(type_info(), "", "CameraFilterPack_Vision_Blood");
        }
        inline app::CameraFilterPack_Vision_Blood* create() {
            return il2cpp::create_object<app::CameraFilterPack_Vision_Blood>(get_class());
        }
    } // namespace CameraFilterPack_Vision_Blood
} // namespace app::classes::types
