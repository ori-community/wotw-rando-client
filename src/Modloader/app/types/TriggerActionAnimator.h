#pragma once
#include <Modloader/app/structs/TriggerActionAnimator.h>
#include <Modloader/app/structs/TriggerActionAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriggerActionAnimator {
        inline app::TriggerActionAnimator__Class** type_info() {
            static app::TriggerActionAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TriggerActionAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TriggerActionAnimator__Class* get_class() {
            return il2cpp::get_class<app::TriggerActionAnimator__Class>(type_info(), "Moon.Timeline", "TriggerActionAnimator");
        }
        inline app::TriggerActionAnimator* create() {
            return il2cpp::create_object<app::TriggerActionAnimator>(get_class());
        }
    } // namespace TriggerActionAnimator
} // namespace app::classes::types
