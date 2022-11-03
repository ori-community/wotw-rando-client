#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Color_BrightContrastSaturation {
        inline app::CameraFilterPack_Color_BrightContrastSaturation__Class** type_info = (app::CameraFilterPack_Color_BrightContrastSaturation__Class**)(modloader::win::memory::resolve_rva(0x047376F0));
        inline app::CameraFilterPack_Color_BrightContrastSaturation__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Color_BrightContrastSaturation__Class>(type_info, "", "CameraFilterPack_Color_BrightContrastSaturation");
        }
        inline app::CameraFilterPack_Color_BrightContrastSaturation* create() {
            return il2cpp::create_object<app::CameraFilterPack_Color_BrightContrastSaturation>(get_class());
        }
    } // namespace CameraFilterPack_Color_BrightContrastSaturation
} // namespace app::classes::types
