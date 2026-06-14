#pragma once
#include <Modloader/app/structs/VectorParameterAnimator.h>
#include <Modloader/app/structs/VectorParameterAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VectorParameterAnimator {
        inline app::VectorParameterAnimator__Class** type_info() {
            static app::VectorParameterAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VectorParameterAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VectorParameterAnimator__Class* get_class() {
            return il2cpp::get_class<app::VectorParameterAnimator__Class>(type_info(), "", "VectorParameterAnimator");
        }
        inline app::VectorParameterAnimator* create() {
            return il2cpp::create_object<app::VectorParameterAnimator>(get_class());
        }
    } // namespace VectorParameterAnimator
} // namespace app::classes::types
