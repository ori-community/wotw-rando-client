#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventTriggerAnimator {
        namespace {
            app::EventTriggerAnimator__Class* type_info_ref = nullptr;
        }
        app::EventTriggerAnimator__Class** type_info = &type_info_ref;
        inline app::EventTriggerAnimator__Class* get_class() {
            return il2cpp::get_class<app::EventTriggerAnimator__Class>(type_info, "Moon.Timeline", "EventTriggerAnimator");
        }
        inline app::EventTriggerAnimator* create() {
            return il2cpp::create_object<app::EventTriggerAnimator>(get_class());
        }
        inline app::EventTriggerAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::EventTriggerAnimator__Array>(get_class(), size);
        }
        inline app::EventTriggerAnimator__Array* create_array(const std::vector<app::EventTriggerAnimator*>& items) {
            return il2cpp::array_new<app::EventTriggerAnimator__Array>(get_class(), items);
        }
    } // namespace EventTriggerAnimator
} // namespace app::classes::types
