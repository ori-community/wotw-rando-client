#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EulerRotationAnimator {
        namespace {
            app::EulerRotationAnimator__Class* type_info_ref = nullptr;
        }
        app::EulerRotationAnimator__Class** type_info = &type_info_ref;
        inline app::EulerRotationAnimator__Class* get_class() {
            return il2cpp::get_class<app::EulerRotationAnimator__Class>(type_info, "", "EulerRotationAnimator");
        }
        inline app::EulerRotationAnimator* create() {
            return il2cpp::create_object<app::EulerRotationAnimator>(get_class());
        }
    } // namespace EulerRotationAnimator
} // namespace app::classes::types
