#pragma once
#include <Modloader/app/structs/CameraFilterPack_Retro_Loading.h>
#include <Modloader/app/structs/CameraFilterPack_Retro_Loading__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Retro_Loading {
        inline app::CameraFilterPack_Retro_Loading__Class** type_info() {
            static app::CameraFilterPack_Retro_Loading__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Retro_Loading__Class**)(modloader::win::memory::resolve_rva(0x0476C848));
            }
            return cache;
        }
        inline app::CameraFilterPack_Retro_Loading__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Retro_Loading__Class>(type_info(), "", "CameraFilterPack_Retro_Loading");
        }
        inline app::CameraFilterPack_Retro_Loading* create() {
            return il2cpp::create_object<app::CameraFilterPack_Retro_Loading>(get_class());
        }
    } // namespace CameraFilterPack_Retro_Loading
} // namespace app::classes::types
