#pragma once
#include <Modloader/app/structs/CameraFilterPack_Light_Rainbow.h>
#include <Modloader/app/structs/CameraFilterPack_Light_Rainbow__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Light_Rainbow {
        inline app::CameraFilterPack_Light_Rainbow__Class** type_info() {
            static app::CameraFilterPack_Light_Rainbow__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Light_Rainbow__Class**)(modloader::win::memory::resolve_rva(0x04729CB0));
            }
            return cache;
        }
        inline app::CameraFilterPack_Light_Rainbow__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Light_Rainbow__Class>(type_info(), "", "CameraFilterPack_Light_Rainbow");
        }
        inline app::CameraFilterPack_Light_Rainbow* create() {
            return il2cpp::create_object<app::CameraFilterPack_Light_Rainbow>(get_class());
        }
    } // namespace CameraFilterPack_Light_Rainbow
} // namespace app::classes::types
