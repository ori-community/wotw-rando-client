#pragma once
#include <Modloader/app/structs/DestroyOnEventTriggerAnimator.h>
#include <Modloader/app/structs/DestroyOnEventTriggerAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DestroyOnEventTriggerAnimator {
        inline app::DestroyOnEventTriggerAnimator__Class** type_info() {
            static app::DestroyOnEventTriggerAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DestroyOnEventTriggerAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DestroyOnEventTriggerAnimator__Class* get_class() {
            return il2cpp::get_class<app::DestroyOnEventTriggerAnimator__Class>(type_info(), "", "DestroyOnEventTriggerAnimator");
        }
        inline app::DestroyOnEventTriggerAnimator* create() {
            return il2cpp::create_object<app::DestroyOnEventTriggerAnimator>(get_class());
        }
    } // namespace DestroyOnEventTriggerAnimator
} // namespace app::classes::types
