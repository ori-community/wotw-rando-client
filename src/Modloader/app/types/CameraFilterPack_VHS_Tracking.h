#pragma once
#include <Modloader/app/structs/CameraFilterPack_VHS_Tracking.h>
#include <Modloader/app/structs/CameraFilterPack_VHS_Tracking__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_VHS_Tracking {
        inline app::CameraFilterPack_VHS_Tracking__Class** type_info() {
            static app::CameraFilterPack_VHS_Tracking__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_VHS_Tracking__Class**)(modloader::win::memory::resolve_rva(0x04709DC8));
            }
            return cache;
        }
        inline app::CameraFilterPack_VHS_Tracking__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_VHS_Tracking__Class>(type_info(), "", "CameraFilterPack_VHS_Tracking");
        }
        inline app::CameraFilterPack_VHS_Tracking* create() {
            return il2cpp::create_object<app::CameraFilterPack_VHS_Tracking>(get_class());
        }
    } // namespace CameraFilterPack_VHS_Tracking
} // namespace app::classes::types
