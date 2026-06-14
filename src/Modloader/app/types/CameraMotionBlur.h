#pragma once
#include <Modloader/app/structs/CameraMotionBlur.h>
#include <Modloader/app/structs/CameraMotionBlur__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraMotionBlur {
        inline app::CameraMotionBlur__Class** type_info() {
            static app::CameraMotionBlur__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraMotionBlur__Class**)(modloader::win::memory::resolve_rva(0x04704C98));
            }
            return cache;
        }
        inline app::CameraMotionBlur__Class* get_class() {
            return il2cpp::get_class<app::CameraMotionBlur__Class>(type_info(), "UnityStandardAssets.ImageEffects", "CameraMotionBlur");
        }
        inline app::CameraMotionBlur* create() {
            return il2cpp::create_object<app::CameraMotionBlur>(get_class());
        }
    } // namespace CameraMotionBlur
} // namespace app::classes::types
