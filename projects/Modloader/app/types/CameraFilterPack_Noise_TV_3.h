#pragma once
#include <Modloader/app/structs/CameraFilterPack_Noise_TV_3.h>
#include <Modloader/app/structs/CameraFilterPack_Noise_TV_3__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Noise_TV_3 {
        inline app::CameraFilterPack_Noise_TV_3__Class** type_info() {
            static app::CameraFilterPack_Noise_TV_3__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Noise_TV_3__Class**)(modloader::win::memory::resolve_rva(0x0472CE20));
            }
            return cache;
        }
        inline app::CameraFilterPack_Noise_TV_3__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Noise_TV_3__Class>(type_info(), "", "CameraFilterPack_Noise_TV_3");
        }
        inline app::CameraFilterPack_Noise_TV_3* create() {
            return il2cpp::create_object<app::CameraFilterPack_Noise_TV_3>(get_class());
        }
    } // namespace CameraFilterPack_Noise_TV_3
} // namespace app::classes::types
