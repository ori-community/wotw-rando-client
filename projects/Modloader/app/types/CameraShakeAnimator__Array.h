#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraShakeAnimator__Array__Class.h>
#include <Modloader/app/structs/CameraShakeAnimator__Array.h>

namespace app::classes::types {
    namespace CameraShakeAnimator__Array {
        namespace {
            inline app::CameraShakeAnimator__Array__Class* type_info_ref = nullptr;
        }
        inline app::CameraShakeAnimator__Array__Class** type_info = &type_info_ref;
        inline app::CameraShakeAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraShakeAnimator__Array__Class>(type_info, "Moon.Timeline", "CameraShakeAnimator[]");
        }
        inline app::CameraShakeAnimator__Array* create() {
            return il2cpp::create_object<app::CameraShakeAnimator__Array>(get_class());
        }
    } // namespace CameraShakeAnimator__Array
} // namespace app::classes::types
