#pragma once
#include <Modloader/app/structs/LegacyFloatAnimationParameterAnimator.h>
#include <Modloader/app/structs/LegacyFloatAnimationParameterAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyFloatAnimationParameterAnimator {
        inline app::LegacyFloatAnimationParameterAnimator__Class** type_info() {
            static app::LegacyFloatAnimationParameterAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyFloatAnimationParameterAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyFloatAnimationParameterAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyFloatAnimationParameterAnimator__Class>(type_info(), "", "LegacyFloatAnimationParameterAnimator");
        }
        inline app::LegacyFloatAnimationParameterAnimator* create() {
            return il2cpp::create_object<app::LegacyFloatAnimationParameterAnimator>(get_class());
        }
    } // namespace LegacyFloatAnimationParameterAnimator
} // namespace app::classes::types
