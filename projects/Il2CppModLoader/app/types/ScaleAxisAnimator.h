#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScaleAxisAnimator {
        namespace {
            app::ScaleAxisAnimator__Class* type_info_ref = nullptr;
        }
        app::ScaleAxisAnimator__Class** type_info = &type_info_ref;
        inline app::ScaleAxisAnimator__Class* get_class() {
            return il2cpp::get_class<app::ScaleAxisAnimator__Class>(type_info, "", "ScaleAxisAnimator");
        }
        inline app::ScaleAxisAnimator* create() {
            return il2cpp::create_object<app::ScaleAxisAnimator>(get_class());
        }
    } // namespace ScaleAxisAnimator
} // namespace app::classes::types
