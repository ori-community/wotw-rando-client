#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blur_Tilt_Shift.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blur_Tilt_Shift__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blur_Tilt_Shift {
        inline app::ShaderID_CameraFilterPack_Blur_Tilt_Shift__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Blur_Tilt_Shift__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Blur_Tilt_Shift__Class**)(modloader::win::memory::resolve_rva(0x0471ACA8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Blur_Tilt_Shift__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blur_Tilt_Shift__Class>(type_info(), "", "ShaderID_CameraFilterPack_Blur_Tilt_Shift");
        }
        inline app::ShaderID_CameraFilterPack_Blur_Tilt_Shift* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blur_Tilt_Shift>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blur_Tilt_Shift
} // namespace app::classes::types
