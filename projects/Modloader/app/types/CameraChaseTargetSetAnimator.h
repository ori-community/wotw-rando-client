#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraChaseTargetSetAnimator__Class.h>
#include <Modloader/app/structs/CameraChaseTargetSetAnimator.h>

namespace app::classes::types {
    namespace CameraChaseTargetSetAnimator {
        namespace {
            inline app::CameraChaseTargetSetAnimator__Class* type_info_ref = nullptr;
        }
        inline app::CameraChaseTargetSetAnimator__Class** type_info = &type_info_ref;
        inline app::CameraChaseTargetSetAnimator__Class* get_class() {
            return il2cpp::get_class<app::CameraChaseTargetSetAnimator__Class>(type_info, "Moon.Timeline", "CameraChaseTargetSetAnimator");
        }
        inline app::CameraChaseTargetSetAnimator* create() {
            return il2cpp::create_object<app::CameraChaseTargetSetAnimator>(get_class());
        }
    } // namespace CameraChaseTargetSetAnimator
} // namespace app::classes::types
