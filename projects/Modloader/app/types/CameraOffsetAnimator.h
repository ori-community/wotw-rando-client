#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraOffsetAnimator {
        namespace {
            inline app::CameraOffsetAnimator__Class* type_info_ref = nullptr;
        }
        inline app::CameraOffsetAnimator__Class** type_info = &type_info_ref;
        inline app::CameraOffsetAnimator__Class* get_class() {
            return il2cpp::get_class<app::CameraOffsetAnimator__Class>(type_info, "", "CameraOffsetAnimator");
        }
        inline app::CameraOffsetAnimator* create() {
            return il2cpp::create_object<app::CameraOffsetAnimator>(get_class());
        }
    } // namespace CameraOffsetAnimator
} // namespace app::classes::types
