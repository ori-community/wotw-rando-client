#pragma once
#include <Modloader/app/structs/CameraFilterPack_Blur_Radial_Fast.h>
#include <Modloader/app/structs/CameraFilterPack_Blur_Radial_Fast__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_Radial_Fast {
        inline app::CameraFilterPack_Blur_Radial_Fast__Class** type_info() {
            static app::CameraFilterPack_Blur_Radial_Fast__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Blur_Radial_Fast__Class**)(modloader::win::memory::resolve_rva(0x0478E790));
            }
            return cache;
        }
        inline app::CameraFilterPack_Blur_Radial_Fast__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_Radial_Fast__Class>(type_info(), "", "CameraFilterPack_Blur_Radial_Fast");
        }
        inline app::CameraFilterPack_Blur_Radial_Fast* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_Radial_Fast>(get_class());
        }
    } // namespace CameraFilterPack_Blur_Radial_Fast
} // namespace app::classes::types
