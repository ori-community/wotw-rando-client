#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventTriggerGameplayAnimator__Array {
        namespace {
            app::EventTriggerGameplayAnimator__Array__Class* type_info_ref = nullptr;
        }
        app::EventTriggerGameplayAnimator__Array__Class** type_info = &type_info_ref;
        inline app::EventTriggerGameplayAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::EventTriggerGameplayAnimator__Array__Class>(type_info, "Moon.Timeline", "EventTriggerGameplayAnimator[]");
        }
        inline app::EventTriggerGameplayAnimator__Array* create() {
            return il2cpp::create_object<app::EventTriggerGameplayAnimator__Array>(get_class());
        }
    } // namespace EventTriggerGameplayAnimator__Array
} // namespace app::classes::types
