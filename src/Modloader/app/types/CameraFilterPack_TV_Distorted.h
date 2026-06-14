#pragma once
#include <Modloader/app/structs/CameraFilterPack_TV_Distorted.h>
#include <Modloader/app/structs/CameraFilterPack_TV_Distorted__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Distorted {
        inline app::CameraFilterPack_TV_Distorted__Class** type_info() {
            static app::CameraFilterPack_TV_Distorted__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_TV_Distorted__Class**)(modloader::win::memory::resolve_rva(0x04788B68));
            }
            return cache;
        }
        inline app::CameraFilterPack_TV_Distorted__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Distorted__Class>(type_info(), "", "CameraFilterPack_TV_Distorted");
        }
        inline app::CameraFilterPack_TV_Distorted* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Distorted>(get_class());
        }
    } // namespace CameraFilterPack_TV_Distorted
} // namespace app::classes::types
