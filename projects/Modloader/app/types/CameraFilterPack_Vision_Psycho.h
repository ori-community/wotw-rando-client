#pragma once
#include <Modloader/app/structs/CameraFilterPack_Vision_Psycho.h>
#include <Modloader/app/structs/CameraFilterPack_Vision_Psycho__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Vision_Psycho {
        inline app::CameraFilterPack_Vision_Psycho__Class** type_info() {
            static app::CameraFilterPack_Vision_Psycho__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Vision_Psycho__Class**)(modloader::win::memory::resolve_rva(0x0472DC70));
            }
            return cache;
        }
        inline app::CameraFilterPack_Vision_Psycho__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Vision_Psycho__Class>(type_info(), "", "CameraFilterPack_Vision_Psycho");
        }
        inline app::CameraFilterPack_Vision_Psycho* create() {
            return il2cpp::create_object<app::CameraFilterPack_Vision_Psycho>(get_class());
        }
    } // namespace CameraFilterPack_Vision_Psycho
} // namespace app::classes::types
