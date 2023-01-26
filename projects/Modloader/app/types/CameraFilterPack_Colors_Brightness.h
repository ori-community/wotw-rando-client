#pragma once
#include <Modloader/app/structs/CameraFilterPack_Colors_Brightness.h>
#include <Modloader/app/structs/CameraFilterPack_Colors_Brightness__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Colors_Brightness {
        inline app::CameraFilterPack_Colors_Brightness__Class** type_info() {
            static app::CameraFilterPack_Colors_Brightness__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Colors_Brightness__Class**)(modloader::win::memory::resolve_rva(0x04795498));
            }
            return cache;
        }
        inline app::CameraFilterPack_Colors_Brightness__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Colors_Brightness__Class>(type_info(), "", "CameraFilterPack_Colors_Brightness");
        }
        inline app::CameraFilterPack_Colors_Brightness* create() {
            return il2cpp::create_object<app::CameraFilterPack_Colors_Brightness>(get_class());
        }
    } // namespace CameraFilterPack_Colors_Brightness
} // namespace app::classes::types
