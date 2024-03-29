#pragma once
#include <Modloader/app/structs/ShaderID_MotionBlur.h>
#include <Modloader/app/structs/ShaderID_MotionBlur__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_MotionBlur {
        inline app::ShaderID_MotionBlur__Class** type_info() {
            static app::ShaderID_MotionBlur__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_MotionBlur__Class**)(modloader::win::memory::resolve_rva(0x0474B480));
            }
            return cache;
        }
        inline app::ShaderID_MotionBlur__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_MotionBlur__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ShaderID_MotionBlur");
        }
        inline app::ShaderID_MotionBlur* create() {
            return il2cpp::create_object<app::ShaderID_MotionBlur>(get_class());
        }
    } // namespace ShaderID_MotionBlur
} // namespace app::classes::types
