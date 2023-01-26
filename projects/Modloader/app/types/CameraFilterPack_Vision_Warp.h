#pragma once
#include <Modloader/app/structs/CameraFilterPack_Vision_Warp.h>
#include <Modloader/app/structs/CameraFilterPack_Vision_Warp__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Vision_Warp {
        inline app::CameraFilterPack_Vision_Warp__Class** type_info() {
            static app::CameraFilterPack_Vision_Warp__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Vision_Warp__Class**)(modloader::win::memory::resolve_rva(0x04718C58));
            }
            return cache;
        }
        inline app::CameraFilterPack_Vision_Warp__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Vision_Warp__Class>(type_info(), "", "CameraFilterPack_Vision_Warp");
        }
        inline app::CameraFilterPack_Vision_Warp* create() {
            return il2cpp::create_object<app::CameraFilterPack_Vision_Warp>(get_class());
        }
    } // namespace CameraFilterPack_Vision_Warp
} // namespace app::classes::types
