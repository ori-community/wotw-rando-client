#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_Tilt_Shift {
        inline app::CameraFilterPack_Blur_Tilt_Shift__Class** type_info = (app::CameraFilterPack_Blur_Tilt_Shift__Class**)(modloader::win::memory::resolve_rva(0x0478CDB8));
        inline app::CameraFilterPack_Blur_Tilt_Shift__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_Tilt_Shift__Class>(type_info, "", "CameraFilterPack_Blur_Tilt_Shift");
        }
        inline app::CameraFilterPack_Blur_Tilt_Shift* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_Tilt_Shift>(get_class());
        }
    } // namespace CameraFilterPack_Blur_Tilt_Shift
} // namespace app::classes::types
