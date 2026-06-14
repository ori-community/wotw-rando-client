#pragma once
#include <Modloader/app/structs/CameraFilterPack_Vision_Aura.h>
#include <Modloader/app/structs/CameraFilterPack_Vision_Aura__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Vision_Aura {
        inline app::CameraFilterPack_Vision_Aura__Class** type_info() {
            static app::CameraFilterPack_Vision_Aura__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Vision_Aura__Class**)(modloader::win::memory::resolve_rva(0x04728D08));
            }
            return cache;
        }
        inline app::CameraFilterPack_Vision_Aura__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Vision_Aura__Class>(type_info(), "", "CameraFilterPack_Vision_Aura");
        }
        inline app::CameraFilterPack_Vision_Aura* create() {
            return il2cpp::create_object<app::CameraFilterPack_Vision_Aura>(get_class());
        }
    } // namespace CameraFilterPack_Vision_Aura
} // namespace app::classes::types
