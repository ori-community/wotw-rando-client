#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventTriggerAnimator_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventTriggerAnimator_c__Class** type_info;
        inline app::EventTriggerAnimator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EventTriggerAnimator_c__Class>(type_info, "Moon.Timeline", "EventTriggerAnimator", "<>c");
        }
        inline app::EventTriggerAnimator_c* create() {
            return il2cpp::create_object<app::EventTriggerAnimator_c>(get_class());
        }
    } // namespace EventTriggerAnimator_c
} // namespace app::classes::types
