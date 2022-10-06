#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventTriggerGameplayAnimator {
        namespace {
            app::EventTriggerGameplayAnimator__Class* type_info_ref = nullptr;
        }
        app::EventTriggerGameplayAnimator__Class** type_info = &type_info_ref;
        inline app::EventTriggerGameplayAnimator__Class* get_class() {
            return il2cpp::get_class<app::EventTriggerGameplayAnimator__Class>(type_info, "Moon.Timeline", "EventTriggerGameplayAnimator");
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
