#pragma once
#include <Modloader/app/structs/CameraFilterPack_Noise_TV.h>
#include <Modloader/app/structs/CameraFilterPack_Noise_TV__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Noise_TV {
        inline app::CameraFilterPack_Noise_TV__Class** type_info() {
            static app::CameraFilterPack_Noise_TV__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Noise_TV__Class**)(modloader::win::memory::resolve_rva(0x0473C7E0));
            }
            return cache;
        }
        inline app::CameraFilterPack_Noise_TV__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Noise_TV__Class>(type_info(), "", "CameraFilterPack_Noise_TV");
        }
        inline app::CameraFilterPack_Noise_TV* create() {
            return il2cpp::create_object<app::CameraFilterPack_Noise_TV>(get_class());
        }
    } // namespace CameraFilterPack_Noise_TV
} // namespace app::classes::types
