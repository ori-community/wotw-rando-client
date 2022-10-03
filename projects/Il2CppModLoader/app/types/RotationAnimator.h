#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RotationAnimator {
        namespace {
            app::RotationAnimator__Class* type_info_ref = nullptr;
        }
        app::RotationAnimator__Class** type_info = &type_info_ref;
        inline app::RotationAnimator__Class* get_class() {
            return il2cpp::get_class<app::RotationAnimator__Class>(type_info, "", "RotationAnimator");
        }
        inline app::RotationAnimator* create() {
            return il2cpp::create_object<app::RotationAnimator>(get_class());
        }
    } // namespace RotationAnimator
} // namespace app::classes::types
