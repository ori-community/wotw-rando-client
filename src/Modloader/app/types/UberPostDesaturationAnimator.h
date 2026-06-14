#pragma once
#include <Modloader/app/structs/UberPostDesaturationAnimator.h>
#include <Modloader/app/structs/UberPostDesaturationAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPostDesaturationAnimator {
        inline app::UberPostDesaturationAnimator__Class** type_info() {
            static app::UberPostDesaturationAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPostDesaturationAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPostDesaturationAnimator__Class* get_class() {
            return il2cpp::get_class<app::UberPostDesaturationAnimator__Class>(type_info(), "", "UberPostDesaturationAnimator");
        }
        inline app::UberPostDesaturationAnimator* create() {
            return il2cpp::create_object<app::UberPostDesaturationAnimator>(get_class());
        }
    } // namespace UberPostDesaturationAnimator
} // namespace app::classes::types
