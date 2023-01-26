#pragma once
#include <Modloader/app/structs/CameraFilterPack_Colors_HUE_Rotate.h>
#include <Modloader/app/structs/CameraFilterPack_Colors_HUE_Rotate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Colors_HUE_Rotate {
        inline app::CameraFilterPack_Colors_HUE_Rotate__Class** type_info() {
            static app::CameraFilterPack_Colors_HUE_Rotate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Colors_HUE_Rotate__Class**)(modloader::win::memory::resolve_rva(0x04769F98));
            }
            return cache;
        }
        inline app::CameraFilterPack_Colors_HUE_Rotate__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Colors_HUE_Rotate__Class>(type_info(), "", "CameraFilterPack_Colors_HUE_Rotate");
        }
        inline app::CameraFilterPack_Colors_HUE_Rotate* create() {
            return il2cpp::create_object<app::CameraFilterPack_Colors_HUE_Rotate>(get_class());
        }
    } // namespace CameraFilterPack_Colors_HUE_Rotate
} // namespace app::classes::types
