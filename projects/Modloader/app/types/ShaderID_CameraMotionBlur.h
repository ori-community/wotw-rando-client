#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_CameraMotionBlur {
        inline app::ShaderID_CameraMotionBlur__Class** type_info = (app::ShaderID_CameraMotionBlur__Class**)(modloader::win::memory::resolve_rva(0x0470A210));
        inline app::ShaderID_CameraMotionBlur__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraMotionBlur__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_CameraMotionBlur");
        }
        inline app::ShaderID_CameraMotionBlur* create() {
            return il2cpp::create_object<app::ShaderID_CameraMotionBlur>(get_class());
        }
    } // namespace ShaderID_CameraMotionBlur
} // namespace app::classes::types
