#pragma once
#include <Modloader/app/structs/UberWaterForceAnimator.h>
#include <Modloader/app/structs/UberWaterForceAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterForceAnimator {
        inline app::UberWaterForceAnimator__Class** type_info() {
            static app::UberWaterForceAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberWaterForceAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberWaterForceAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberWaterForceAnimator__Class>(type_info(), "", "UberWaterForceAnimator");
        }
        inline app::UberWaterForceAnimator* create() {
            return il2cpp::create_object<app::UberWaterForceAnimator>(get_class());
        }
    } // namespace UberWaterForceAnimator
} // namespace app::classes::types
