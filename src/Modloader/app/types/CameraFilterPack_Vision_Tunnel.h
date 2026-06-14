#pragma once
#include <Modloader/app/structs/CameraFilterPack_Vision_Tunnel.h>
#include <Modloader/app/structs/CameraFilterPack_Vision_Tunnel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Vision_Tunnel {
        inline app::CameraFilterPack_Vision_Tunnel__Class** type_info() {
            static app::CameraFilterPack_Vision_Tunnel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Vision_Tunnel__Class**)(modloader::win::memory::resolve_rva(0x0471EFF8));
            }
            return cache;
        }
        inline app::CameraFilterPack_Vision_Tunnel__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Vision_Tunnel__Class>(type_info(), "", "CameraFilterPack_Vision_Tunnel");
        }
        inline app::CameraFilterPack_Vision_Tunnel* create() {
            return il2cpp::create_object<app::CameraFilterPack_Vision_Tunnel>(get_class());
        }
    } // namespace CameraFilterPack_Vision_Tunnel
} // namespace app::classes::types
