#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
