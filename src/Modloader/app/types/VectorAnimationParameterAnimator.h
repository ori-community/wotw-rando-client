#pragma once
#include <Modloader/app/structs/VectorAnimationParameterAnimator.h>
#include <Modloader/app/structs/VectorAnimationParameterAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VectorAnimationParameterAnimator {
        inline app::VectorAnimationParameterAnimator__Class** type_info() {
            static app::VectorAnimationParameterAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VectorAnimationParameterAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VectorAnimationParameterAnimator__Class* get_class() {
            return il2cpp::get_class<app::VectorAnimationParameterAnimator__Class>(type_info(), "", "VectorAnimationParameterAnimator");
        }
        inline app::VectorAnimationParameterAnimator* create() {
            return il2cpp::create_object<app::VectorAnimationParameterAnimator>(get_class());
        }
    } // namespace VectorAnimationParameterAnimator
} // namespace app::classes::types
