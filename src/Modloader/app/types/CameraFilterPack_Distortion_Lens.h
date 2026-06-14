#pragma once
#include <Modloader/app/structs/CameraFilterPack_Distortion_Lens.h>
#include <Modloader/app/structs/CameraFilterPack_Distortion_Lens__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Distortion_Lens {
        inline app::CameraFilterPack_Distortion_Lens__Class** type_info() {
            static app::CameraFilterPack_Distortion_Lens__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Distortion_Lens__Class**)(modloader::win::memory::resolve_rva(0x0477EC78));
            }
            return cache;
        }
        inline app::CameraFilterPack_Distortion_Lens__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Distortion_Lens__Class>(type_info(), "", "CameraFilterPack_Distortion_Lens");
        }
        inline app::CameraFilterPack_Distortion_Lens* create() {
            return il2cpp::create_object<app::CameraFilterPack_Distortion_Lens>(get_class());
        }
    } // namespace CameraFilterPack_Distortion_Lens
} // namespace app::classes::types
