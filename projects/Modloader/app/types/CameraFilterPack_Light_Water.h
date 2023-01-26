#pragma once
#include <Modloader/app/structs/CameraFilterPack_Light_Water.h>
#include <Modloader/app/structs/CameraFilterPack_Light_Water__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Light_Water {
        inline app::CameraFilterPack_Light_Water__Class** type_info() {
            static app::CameraFilterPack_Light_Water__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Light_Water__Class**)(modloader::win::memory::resolve_rva(0x04760D68));
            }
            return cache;
        }
        inline app::CameraFilterPack_Light_Water__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Light_Water__Class>(type_info(), "", "CameraFilterPack_Light_Water");
        }
        inline app::CameraFilterPack_Light_Water* create() {
            return il2cpp::create_object<app::CameraFilterPack_Light_Water>(get_class());
        }
    } // namespace CameraFilterPack_Light_Water
} // namespace app::classes::types
