#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blur_BlurHole.h>
#include <Modloader/app/structs/CameraFilterPack_Blur_BlurHole__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_BlurHole {
        inline app::CameraFilterPack_Blur_BlurHole__Class** type_info() {
            static app::CameraFilterPack_Blur_BlurHole__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Blur_BlurHole__Class**)(modloader::win::memory::resolve_rva(0x0478E3D8));
            }
            return cache;
        }
        inline app::CameraFilterPack_Blur_BlurHole__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_BlurHole__Class>(type_info(), "", "CameraFilterPack_Blur_BlurHole");
        }
        inline app::CameraFilterPack_Blur_BlurHole* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_BlurHole>(get_class());
        }
    } // namespace CameraFilterPack_Blur_BlurHole
} // namespace app::classes::types
