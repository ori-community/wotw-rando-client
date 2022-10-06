#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatCurveAnimator {
        namespace {
            app::FloatCurveAnimator__Class* type_info_ref = nullptr;
        }
        app::FloatCurveAnimator__Class** type_info = &type_info_ref;
        inline app::FloatCurveAnimator__Class* get_class() {
            return il2cpp::get_class<app::FloatCurveAnimator__Class>(type_info, "", "FloatCurveAnimator");
        }
        inline app::FloatCurveAnimator* create() {
            return il2cpp::create_object<app::FloatCurveAnimator>(get_class());
        }
        inline app::FloatCurveAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::FloatCurveAnimator__Array>(get_class(), size);
        }
        inline app::FloatCurveAnimator__Array* create_array(const std::vector<app::FloatCurveAnimator*>& items) {
            return il2cpp::array_new<app::FloatCurveAnimator__Array>(get_class(), items);
        }
    } // namespace FloatCurveAnimator
} // namespace app::classes::types
