#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Blur_Tilt_Shift_V__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Blur_Tilt_Shift_V.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blur_Tilt_Shift_V {
        inline app::CameraFilterPack_Blur_Tilt_Shift_V__Class** type_info = (app::CameraFilterPack_Blur_Tilt_Shift_V__Class**)(modloader::win::memory::resolve_rva(0x04798790));
        inline app::CameraFilterPack_Blur_Tilt_Shift_V__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blur_Tilt_Shift_V__Class>(type_info, "", "CameraFilterPack_Blur_Tilt_Shift_V");
        }
        inline app::CameraFilterPack_Blur_Tilt_Shift_V* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blur_Tilt_Shift_V>(get_class());
        }
    } // namespace CameraFilterPack_Blur_Tilt_Shift_V
} // namespace app::classes::types
