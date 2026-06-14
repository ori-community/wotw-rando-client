#pragma once
#include <Modloader/app/structs/CameraFilterPack_Color_BrightContrastSaturation.h>
#include <Modloader/app/structs/CameraFilterPack_Color_BrightContrastSaturation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Color_BrightContrastSaturation {
        inline app::CameraFilterPack_Color_BrightContrastSaturation__Class** type_info() {
            static app::CameraFilterPack_Color_BrightContrastSaturation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Color_BrightContrastSaturation__Class**)(modloader::win::memory::resolve_rva(0x047376F0));
            }
            return cache;
        }
        inline app::CameraFilterPack_Color_BrightContrastSaturation__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Color_BrightContrastSaturation__Class>(type_info(), "", "CameraFilterPack_Color_BrightContrastSaturation");
        }
        inline app::CameraFilterPack_Color_BrightContrastSaturation* create() {
            return il2cpp::create_object<app::CameraFilterPack_Color_BrightContrastSaturation>(get_class());
        }
    } // namespace CameraFilterPack_Color_BrightContrastSaturation
} // namespace app::classes::types
