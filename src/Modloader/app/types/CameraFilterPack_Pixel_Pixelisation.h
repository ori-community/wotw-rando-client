#pragma once
#include <Modloader/app/structs/CameraFilterPack_Pixel_Pixelisation.h>
#include <Modloader/app/structs/CameraFilterPack_Pixel_Pixelisation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Pixel_Pixelisation {
        inline app::CameraFilterPack_Pixel_Pixelisation__Class** type_info() {
            static app::CameraFilterPack_Pixel_Pixelisation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Pixel_Pixelisation__Class**)(modloader::win::memory::resolve_rva(0x0473CF88));
            }
            return cache;
        }
        inline app::CameraFilterPack_Pixel_Pixelisation__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Pixel_Pixelisation__Class>(type_info(), "", "CameraFilterPack_Pixel_Pixelisation");
        }
        inline app::CameraFilterPack_Pixel_Pixelisation* create() {
            return il2cpp::create_object<app::CameraFilterPack_Pixel_Pixelisation>(get_class());
        }
    } // namespace CameraFilterPack_Pixel_Pixelisation
} // namespace app::classes::types
