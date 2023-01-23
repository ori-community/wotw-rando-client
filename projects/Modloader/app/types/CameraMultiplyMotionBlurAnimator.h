#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraMultiplyMotionBlurAnimator__Class.h>
#include <Modloader/app/structs/CameraMultiplyMotionBlurAnimator.h>

namespace app::classes::types {
    namespace CameraMultiplyMotionBlurAnimator {
        namespace {
            inline app::CameraMultiplyMotionBlurAnimator__Class* type_info_ref = nullptr;
        }
        inline app::CameraMultiplyMotionBlurAnimator__Class** type_info = &type_info_ref;
        inline app::CameraMultiplyMotionBlurAnimator__Class* get_class() {
            return il2cpp::get_class<app::CameraMultiplyMotionBlurAnimator__Class>(type_info, "", "CameraMultiplyMotionBlurAnimator");
        }
        inline app::CameraMultiplyMotionBlurAnimator* create() {
            return il2cpp::create_object<app::CameraMultiplyMotionBlurAnimator>(get_class());
        }
    } // namespace CameraMultiplyMotionBlurAnimator
} // namespace app::classes::types
