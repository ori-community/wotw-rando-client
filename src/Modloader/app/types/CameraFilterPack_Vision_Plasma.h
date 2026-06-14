#pragma once
#include <Modloader/app/structs/CameraFilterPack_Vision_Plasma.h>
#include <Modloader/app/structs/CameraFilterPack_Vision_Plasma__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Vision_Plasma {
        inline app::CameraFilterPack_Vision_Plasma__Class** type_info() {
            static app::CameraFilterPack_Vision_Plasma__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Vision_Plasma__Class**)(modloader::win::memory::resolve_rva(0x047581E0));
            }
            return cache;
        }
        inline app::CameraFilterPack_Vision_Plasma__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Vision_Plasma__Class>(type_info(), "", "CameraFilterPack_Vision_Plasma");
        }
        inline app::CameraFilterPack_Vision_Plasma* create() {
            return il2cpp::create_object<app::CameraFilterPack_Vision_Plasma>(get_class());
        }
    } // namespace CameraFilterPack_Vision_Plasma
} // namespace app::classes::types
