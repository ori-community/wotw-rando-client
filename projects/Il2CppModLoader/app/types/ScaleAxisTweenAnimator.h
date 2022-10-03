#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScaleAxisTweenAnimator {
        namespace {
            app::ScaleAxisTweenAnimator__Class* type_info_ref = nullptr;
        }
        app::ScaleAxisTweenAnimator__Class** type_info = &type_info_ref;
        inline app::ScaleAxisTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::ScaleAxisTweenAnimator__Class>(type_info, "Moon.Timeline", "ScaleAxisTweenAnimator");
        }
        inline app::ScaleAxisTweenAnimator* create() {
            return il2cpp::create_object<app::ScaleAxisTweenAnimator>(get_class());
        }
    } // namespace ScaleAxisTweenAnimator
} // namespace app::classes::types
