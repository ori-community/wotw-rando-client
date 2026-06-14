#pragma once
#include <Modloader/app/structs/CameraFilterPack_Colors_NewPosterize.h>
#include <Modloader/app/structs/CameraFilterPack_Colors_NewPosterize__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Colors_NewPosterize {
        inline app::CameraFilterPack_Colors_NewPosterize__Class** type_info() {
            static app::CameraFilterPack_Colors_NewPosterize__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Colors_NewPosterize__Class**)(modloader::win::memory::resolve_rva(0x0478FEB8));
            }
            return cache;
        }
        inline app::CameraFilterPack_Colors_NewPosterize__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Colors_NewPosterize__Class>(type_info(), "", "CameraFilterPack_Colors_NewPosterize");
        }
        inline app::CameraFilterPack_Colors_NewPosterize* create() {
            return il2cpp::create_object<app::CameraFilterPack_Colors_NewPosterize>(get_class());
        }
    } // namespace CameraFilterPack_Colors_NewPosterize
} // namespace app::classes::types
