#pragma once
#include <Modloader/app/structs/CameraFilterPack_TV_ARCADE_2.h>
#include <Modloader/app/structs/CameraFilterPack_TV_ARCADE_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_ARCADE_2 {
        inline app::CameraFilterPack_TV_ARCADE_2__Class** type_info() {
            static app::CameraFilterPack_TV_ARCADE_2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_TV_ARCADE_2__Class**)(modloader::win::memory::resolve_rva(0x0472C4A0));
            }
            return cache;
        }
        inline app::CameraFilterPack_TV_ARCADE_2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_ARCADE_2__Class>(type_info(), "", "CameraFilterPack_TV_ARCADE_2");
        }
        inline app::CameraFilterPack_TV_ARCADE_2* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_ARCADE_2>(get_class());
        }
    } // namespace CameraFilterPack_TV_ARCADE_2
} // namespace app::classes::types
