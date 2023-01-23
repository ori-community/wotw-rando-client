#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraMotionBlur__Class.h>
#include <Modloader/app/structs/CameraMotionBlur.h>

namespace app::classes::types {
    namespace CameraMotionBlur {
        inline app::CameraMotionBlur__Class** type_info = (app::CameraMotionBlur__Class**)(modloader::win::memory::resolve_rva(0x04704C98));
        inline app::CameraMotionBlur__Class* get_class() {
            return il2cpp::get_class<app::CameraMotionBlur__Class>(type_info, "UnityStandardAssets.ImageEffects", "CameraMotionBlur");
        }
        inline app::CameraMotionBlur* create() {
            return il2cpp::create_object<app::CameraMotionBlur>(get_class());
        }
    } // namespace CameraMotionBlur
} // namespace app::classes::types
