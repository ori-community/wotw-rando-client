#pragma once
#include <Modloader/app/structs/UberWaterAnimator.h>
#include <Modloader/app/structs/UberWaterAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterAnimator {
        inline app::UberWaterAnimator__Class** type_info() {
            static app::UberWaterAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberWaterAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberWaterAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberWaterAnimator__Class>(type_info(), "", "UberWaterAnimator");
        }
        inline app::UberWaterAnimator* create() {
            return il2cpp::create_object<app::UberWaterAnimator>(get_class());
        }
    } // namespace UberWaterAnimator
} // namespace app::classes::types
