#pragma once
#include <Modloader/app/structs/CameraFilterPack_Pixelisation_OilPaint.h>
#include <Modloader/app/structs/CameraFilterPack_Pixelisation_OilPaint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Pixelisation_OilPaint {
        inline app::CameraFilterPack_Pixelisation_OilPaint__Class** type_info() {
            static app::CameraFilterPack_Pixelisation_OilPaint__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Pixelisation_OilPaint__Class**)(modloader::win::memory::resolve_rva(0x0478C548));
            }
            return cache;
        }
        inline app::CameraFilterPack_Pixelisation_OilPaint__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Pixelisation_OilPaint__Class>(type_info(), "", "CameraFilterPack_Pixelisation_OilPaint");
        }
        inline app::CameraFilterPack_Pixelisation_OilPaint* create() {
            return il2cpp::create_object<app::CameraFilterPack_Pixelisation_OilPaint>(get_class());
        }
    } // namespace CameraFilterPack_Pixelisation_OilPaint
} // namespace app::classes::types
