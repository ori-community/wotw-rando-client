#pragma once
#include <Modloader/app/structs/CameraFilterPack_TV_Tiles.h>
#include <Modloader/app/structs/CameraFilterPack_TV_Tiles__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Tiles {
        inline app::CameraFilterPack_TV_Tiles__Class** type_info() {
            static app::CameraFilterPack_TV_Tiles__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_TV_Tiles__Class**)(modloader::win::memory::resolve_rva(0x0472F978));
            }
            return cache;
        }
        inline app::CameraFilterPack_TV_Tiles__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Tiles__Class>(type_info(), "", "CameraFilterPack_TV_Tiles");
        }
        inline app::CameraFilterPack_TV_Tiles* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Tiles>(get_class());
        }
    } // namespace CameraFilterPack_TV_Tiles
} // namespace app::classes::types
