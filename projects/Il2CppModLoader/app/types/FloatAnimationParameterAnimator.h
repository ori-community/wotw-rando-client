#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatAnimationParameterAnimator {
        namespace {
            inline app::FloatAnimationParameterAnimator__Class* type_info_ref = nullptr;
        }
        inline app::FloatAnimationParameterAnimator__Class** type_info = &type_info_ref;
        inline app::FloatAnimationParameterAnimator__Class* get_class() {
            return il2cpp::get_class<app::FloatAnimationParameterAnimator__Class>(type_info, "Moon.Timeline", "FloatAnimationParameterAnimator");
        }
        inline app::FloatAnimationParameterAnimator* create() {
            return il2cpp::create_object<app::FloatAnimationParameterAnimator>(get_class());
        }
    } // namespace FloatAnimationParameterAnimator
} // namespace app::classes::types
