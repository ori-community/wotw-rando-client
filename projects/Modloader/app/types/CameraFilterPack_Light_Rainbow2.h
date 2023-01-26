#pragma once
#include <Modloader/app/structs/CameraFilterPack_Light_Rainbow2.h>
#include <Modloader/app/structs/CameraFilterPack_Light_Rainbow2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Light_Rainbow2 {
        inline app::CameraFilterPack_Light_Rainbow2__Class** type_info() {
            static app::CameraFilterPack_Light_Rainbow2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Light_Rainbow2__Class**)(modloader::win::memory::resolve_rva(0x047087C8));
            }
            return cache;
        }
        inline app::CameraFilterPack_Light_Rainbow2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Light_Rainbow2__Class>(type_info(), "", "CameraFilterPack_Light_Rainbow2");
        }
        inline app::CameraFilterPack_Light_Rainbow2* create() {
            return il2cpp::create_object<app::CameraFilterPack_Light_Rainbow2>(get_class());
        }
    } // namespace CameraFilterPack_Light_Rainbow2
} // namespace app::classes::types
