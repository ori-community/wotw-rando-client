#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EulerZRotationTweenAnimator__Class.h>
#include <Modloader/app/structs/EulerZRotationTweenAnimator.h>

namespace app::classes::types {
    namespace EulerZRotationTweenAnimator {
        namespace {
            inline app::EulerZRotationTweenAnimator__Class* type_info_ref = nullptr;
        }
        inline app::EulerZRotationTweenAnimator__Class** type_info = &type_info_ref;
        inline app::EulerZRotationTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::EulerZRotationTweenAnimator__Class>(type_info, "Moon.Timeline", "EulerZRotationTweenAnimator");
        }
        inline app::EulerZRotationTweenAnimator* create() {
            return il2cpp::create_object<app::EulerZRotationTweenAnimator>(get_class());
        }
    } // namespace EulerZRotationTweenAnimator
} // namespace app::classes::types
