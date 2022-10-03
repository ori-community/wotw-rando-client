#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WideScreenAdjustmentAnimator {
        namespace {
            app::WideScreenAdjustmentAnimator__Class* type_info_ref = nullptr;
        }
        app::WideScreenAdjustmentAnimator__Class** type_info = &type_info_ref;
        inline app::WideScreenAdjustmentAnimator__Class* get_class() {
            return il2cpp::get_class<app::WideScreenAdjustmentAnimator__Class>(type_info, "", "WideScreenAdjustmentAnimator");
        }
        inline app::WideScreenAdjustmentAnimator* create() {
            return il2cpp::create_object<app::WideScreenAdjustmentAnimator>(get_class());
        }
    } // namespace WideScreenAdjustmentAnimator
} // namespace app::classes::types
