#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyFloatAnimationParameterAnimator {
        namespace {
            app::LegacyFloatAnimationParameterAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyFloatAnimationParameterAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyFloatAnimationParameterAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyFloatAnimationParameterAnimator__Class>(type_info, "", "LegacyFloatAnimationParameterAnimator");
        }
        inline app::LegacyFloatAnimationParameterAnimator* create() {
            return il2cpp::create_object<app::LegacyFloatAnimationParameterAnimator>(get_class());
        }
    } // namespace LegacyFloatAnimationParameterAnimator
} // namespace app::classes::types
