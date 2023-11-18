#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blur_Tilt_Shift_V.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blur_Tilt_Shift_V__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blur_Tilt_Shift_V {
        inline app::ShaderID_CameraFilterPack_Blur_Tilt_Shift_V__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Blur_Tilt_Shift_V__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Blur_Tilt_Shift_V__Class**)(modloader::win::memory::resolve_rva(0x047830D8));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Blur_Tilt_Shift_V__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blur_Tilt_Shift_V__Class>(type_info(), "", "ShaderID_CameraFilterPack_Blur_Tilt_Shift_V");
        }
        inline app::ShaderID_CameraFilterPack_Blur_Tilt_Shift_V* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blur_Tilt_Shift_V>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blur_Tilt_Shift_V
} // namespace app::classes::types
