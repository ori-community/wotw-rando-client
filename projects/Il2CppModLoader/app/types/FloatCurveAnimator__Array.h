#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatCurveAnimator__Array {
        namespace {
            inline app::FloatCurveAnimator__Array__Class* type_info_ref = nullptr;
        }
        inline app::FloatCurveAnimator__Array__Class** type_info = &type_info_ref;
        inline app::FloatCurveAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::FloatCurveAnimator__Array__Class>(type_info, "", "FloatCurveAnimator[]");
        }
        inline app::FloatCurveAnimator__Array* create() {
            return il2cpp::create_object<app::FloatCurveAnimator__Array>(get_class());
        }
    } // namespace FloatCurveAnimator__Array
} // namespace app::classes::types
