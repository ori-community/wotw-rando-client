#pragma once
#include <Modloader/app/structs/CameraFilterPack_Alien_Vision.h>
#include <Modloader/app/structs/CameraFilterPack_Alien_Vision__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Alien_Vision {
        inline app::CameraFilterPack_Alien_Vision__Class** type_info() {
            static app::CameraFilterPack_Alien_Vision__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Alien_Vision__Class**)(modloader::win::memory::resolve_rva(0x047044A8));
            }
            return cache;
        }
        inline app::CameraFilterPack_Alien_Vision__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Alien_Vision__Class>(type_info(), "", "CameraFilterPack_Alien_Vision");
        }
        inline app::CameraFilterPack_Alien_Vision* create() {
            return il2cpp::create_object<app::CameraFilterPack_Alien_Vision>(get_class());
        }
    } // namespace CameraFilterPack_Alien_Vision
} // namespace app::classes::types
