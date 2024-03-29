#pragma once
#include <Modloader/app/structs/CameraFilterPack_FX_Spot.h>
#include <Modloader/app/structs/CameraFilterPack_FX_Spot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Spot {
        inline app::CameraFilterPack_FX_Spot__Class** type_info() {
            static app::CameraFilterPack_FX_Spot__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_FX_Spot__Class**)(modloader::win::memory::resolve_rva(0x0472E298));
            }
            return cache;
        }
        inline app::CameraFilterPack_FX_Spot__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Spot__Class>(type_info(), "", "CameraFilterPack_FX_Spot");
        }
        inline app::CameraFilterPack_FX_Spot* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Spot>(get_class());
        }
    } // namespace CameraFilterPack_FX_Spot
} // namespace app::classes::types
