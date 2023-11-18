#pragma once
#include <Modloader/app/structs/CameraFilterPack_FX_Hexagon_Black.h>
#include <Modloader/app/structs/CameraFilterPack_FX_Hexagon_Black__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_FX_Hexagon_Black {
        inline app::CameraFilterPack_FX_Hexagon_Black__Class** type_info() {
            static app::CameraFilterPack_FX_Hexagon_Black__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_FX_Hexagon_Black__Class**)(modloader::win::memory::resolve_rva(0x04738368));
            }
            return cache;
        }
        inline app::CameraFilterPack_FX_Hexagon_Black__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_FX_Hexagon_Black__Class>(type_info(), "", "CameraFilterPack_FX_Hexagon_Black");
        }
        inline app::CameraFilterPack_FX_Hexagon_Black* create() {
            return il2cpp::create_object<app::CameraFilterPack_FX_Hexagon_Black>(get_class());
        }
    } // namespace CameraFilterPack_FX_Hexagon_Black
} // namespace app::classes::types
