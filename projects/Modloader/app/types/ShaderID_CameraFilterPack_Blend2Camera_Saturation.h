#pragma once
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blend2Camera_Saturation.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Blend2Camera_Saturation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blend2Camera_Saturation {
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Saturation__Class** type_info() {
            static app::ShaderID_CameraFilterPack_Blend2Camera_Saturation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraFilterPack_Blend2Camera_Saturation__Class**)(modloader::win::memory::resolve_rva(0x0471CC58));
            }
            return cache;
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Saturation__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blend2Camera_Saturation__Class>(type_info(), "", "ShaderID_CameraFilterPack_Blend2Camera_Saturation");
        }
        inline app::ShaderID_CameraFilterPack_Blend2Camera_Saturation* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blend2Camera_Saturation>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blend2Camera_Saturation
} // namespace app::classes::types
