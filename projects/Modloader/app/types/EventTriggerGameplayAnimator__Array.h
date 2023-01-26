#pragma once
#include <Modloader/app/structs/EventTriggerGameplayAnimator__Array.h>
#include <Modloader/app/structs/EventTriggerGameplayAnimator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventTriggerGameplayAnimator__Array {
        inline app::EventTriggerGameplayAnimator__Array__Class** type_info() {
            static app::EventTriggerGameplayAnimator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventTriggerGameplayAnimator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventTriggerGameplayAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::EventTriggerGameplayAnimator__Array__Class>(type_info(), "Moon.Timeline", "EventTriggerGameplayAnimator[]");
        }
        inline app::EventTriggerGameplayAnimator__Array* create() {
            return il2cpp::create_object<app::EventTriggerGameplayAnimator__Array>(get_class());
        }
    } // namespace EventTriggerGameplayAnimator__Array
} // namespace app::classes::types
