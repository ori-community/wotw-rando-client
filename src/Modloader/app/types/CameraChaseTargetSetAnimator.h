#pragma once
#include <Modloader/app/structs/CameraChaseTargetSetAnimator.h>
#include <Modloader/app/structs/CameraChaseTargetSetAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraChaseTargetSetAnimator {
        inline app::CameraChaseTargetSetAnimator__Class** type_info() {
            static app::CameraChaseTargetSetAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraChaseTargetSetAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraChaseTargetSetAnimator__Class* get_class() {
            return il2cpp::get_class<app::CameraChaseTargetSetAnimator__Class>(type_info(), "Moon.Timeline", "CameraChaseTargetSetAnimator");
        }
        inline app::CameraChaseTargetSetAnimator* create() {
            return il2cpp::create_object<app::CameraChaseTargetSetAnimator>(get_class());
        }
    } // namespace CameraChaseTargetSetAnimator
} // namespace app::classes::types
