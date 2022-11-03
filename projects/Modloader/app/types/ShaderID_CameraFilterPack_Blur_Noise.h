#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Blur_Noise {
        inline app::ShaderID_CameraFilterPack_Blur_Noise__Class** type_info = (app::ShaderID_CameraFilterPack_Blur_Noise__Class**)(modloader::win::memory::resolve_rva(0x04734470));
        inline app::ShaderID_CameraFilterPack_Blur_Noise__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Blur_Noise__Class>(type_info, "", "ShaderID_CameraFilterPack_Blur_Noise");
        }
        inline app::ShaderID_CameraFilterPack_Blur_Noise* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Blur_Noise>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Blur_Noise
} // namespace app::classes::types
