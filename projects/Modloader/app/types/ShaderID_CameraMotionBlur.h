#pragma once
#include <Modloader/app/structs/ShaderID_CameraMotionBlur.h>
#include <Modloader/app/structs/ShaderID_CameraMotionBlur__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraMotionBlur {
        inline app::ShaderID_CameraMotionBlur__Class** type_info() {
            static app::ShaderID_CameraMotionBlur__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_CameraMotionBlur__Class**)(modloader::win::memory::resolve_rva(0x0470A210));
            }
            return cache;
        }
        inline app::ShaderID_CameraMotionBlur__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraMotionBlur__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ShaderID_CameraMotionBlur");
        }
        inline app::ShaderID_CameraMotionBlur* create() {
            return il2cpp::create_object<app::ShaderID_CameraMotionBlur>(get_class());
        }
    } // namespace ShaderID_CameraMotionBlur
} // namespace app::classes::types
