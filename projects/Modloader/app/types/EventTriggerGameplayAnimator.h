#pragma once
#include <Modloader/app/structs/EventTriggerGameplayAnimator.h>
#include <Modloader/app/structs/EventTriggerGameplayAnimator__Array.h>
#include <Modloader/app/structs/EventTriggerGameplayAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventTriggerGameplayAnimator {
        inline app::EventTriggerGameplayAnimator__Class** type_info() {
            static app::EventTriggerGameplayAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventTriggerGameplayAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventTriggerGameplayAnimator__Class* get_class() {
            return il2cpp::get_class<app::EventTriggerGameplayAnimator__Class>(type_info(), "Moon.Timeline", "EventTriggerGameplayAnimator");
        }
        inline app::EventTriggerGameplayAnimator* create() {
            return il2cpp::create_object<app::EventTriggerGameplayAnimator>(get_class());
        }
        inline app::EventTriggerGameplayAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::EventTriggerGameplayAnimator__Array>(get_class(), size);
        }
        inline app::EventTriggerGameplayAnimator__Array* create_array(const std::vector<app::EventTriggerGameplayAnimator*>& items) {
            return il2cpp::array_new<app::EventTriggerGameplayAnimator__Array>(get_class(), items);
        }
    } // namespace EventTriggerGameplayAnimator
} // namespace app::classes::types
