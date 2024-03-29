#pragma once
#include <Modloader/app/structs/CameraFilterPack_Color_Contrast.h>
#include <Modloader/app/structs/CameraFilterPack_Color_Contrast__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Color_Contrast {
        inline app::CameraFilterPack_Color_Contrast__Class** type_info() {
            static app::CameraFilterPack_Color_Contrast__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Color_Contrast__Class**)(modloader::win::memory::resolve_rva(0x0471DFC8));
            }
            return cache;
        }
        inline app::CameraFilterPack_Color_Contrast__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Color_Contrast__Class>(type_info(), "", "CameraFilterPack_Color_Contrast");
        }
        inline app::CameraFilterPack_Color_Contrast* create() {
            return il2cpp::create_object<app::CameraFilterPack_Color_Contrast>(get_class());
        }
    } // namespace CameraFilterPack_Color_Contrast
} // namespace app::classes::types
