#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blur_Tilt_Shift_Hole.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blur_Tilt_Shift_Hole__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blur_Tilt_Shift_Hole {
        inline app::ShaderID_CameraFilterPack_Blur_Tilt_Shift_Hole__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Blur_Tilt_Shift_Hole__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Blur_Tilt_Shift_Hole__Class**)(modloader::win::memory::resolve_rva(0x04734AF0));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Blur_Tilt_Shift_Hole__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blur_Tilt_Shift_Hole__Class>(type_info(), "", "ShaderID_CameraFilterPack_Blur_Tilt_Shift_Hole");
        }
        inline app::ShaderID_CameraFilterPack_Blur_Tilt_Shift_Hole* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blur_Tilt_Shift_Hole>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blur_Tilt_Shift_Hole
} // namespace app::classes::types
