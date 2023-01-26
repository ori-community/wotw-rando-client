#pragma once
#include <Modloader/app/structs/FloatCurveAnimator__Array.h>
#include <Modloader/app/structs/FloatCurveAnimator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatCurveAnimator__Array {
        inline app::FloatCurveAnimator__Array__Class** type_info() {
            static app::FloatCurveAnimator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatCurveAnimator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatCurveAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::FloatCurveAnimator__Array__Class>(type_info(), "", "FloatCurveAnimator[]");
        }
        inline app::FloatCurveAnimator__Array* create() {
            return il2cpp::create_object<app::FloatCurveAnimator__Array>(get_class());
        }
    } // namespace FloatCurveAnimator__Array
} // namespace app::classes::types
