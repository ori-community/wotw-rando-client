#pragma once
#include <Modloader/app/structs/CameraFilterPack_Vision_Drost.h>
#include <Modloader/app/structs/CameraFilterPack_Vision_Drost__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Vision_Drost {
        inline app::CameraFilterPack_Vision_Drost__Class** type_info() {
            static app::CameraFilterPack_Vision_Drost__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Vision_Drost__Class**)(modloader::win::memory::resolve_rva(0x04714148));
            }
            return cache;
        }
        inline app::CameraFilterPack_Vision_Drost__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Vision_Drost__Class>(type_info(), "", "CameraFilterPack_Vision_Drost");
        }
        inline app::CameraFilterPack_Vision_Drost* create() {
            return il2cpp::create_object<app::CameraFilterPack_Vision_Drost>(get_class());
        }
    } // namespace CameraFilterPack_Vision_Drost
} // namespace app::classes::types
