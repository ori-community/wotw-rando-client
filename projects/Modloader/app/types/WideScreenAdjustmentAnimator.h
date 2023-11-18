#pragma once
#include <Modloader/app/structs/WideScreenAdjustmentAnimator.h>
#include <Modloader/app/structs/WideScreenAdjustmentAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WideScreenAdjustmentAnimator {
        inline app::WideScreenAdjustmentAnimator__Class** type_info() {
            static app::WideScreenAdjustmentAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WideScreenAdjustmentAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WideScreenAdjustmentAnimator__Class* get_class() {
            return il2cpp::get_class<app::WideScreenAdjustmentAnimator__Class>(type_info(), "", "WideScreenAdjustmentAnimator");
        }
        inline app::WideScreenAdjustmentAnimator* create() {
            return il2cpp::create_object<app::WideScreenAdjustmentAnimator>(get_class());
        }
    } // namespace WideScreenAdjustmentAnimator
} // namespace app::classes::types
