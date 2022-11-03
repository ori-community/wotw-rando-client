#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Distortion_Lens {
        inline app::ShaderID_CameraFilterPack_Distortion_Lens__Class** type_info = (app::ShaderID_CameraFilterPack_Distortion_Lens__Class**)(modloader::win::memory::resolve_rva(0x04774B58));
        inline app::ShaderID_CameraFilterPack_Distortion_Lens__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Distortion_Lens__Class>(type_info, "", "ShaderID_CameraFilterPack_Distortion_Lens");
        }
        inline app::ShaderID_CameraFilterPack_Distortion_Lens* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Distortion_Lens>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Distortion_Lens
} // namespace app::classes::types
