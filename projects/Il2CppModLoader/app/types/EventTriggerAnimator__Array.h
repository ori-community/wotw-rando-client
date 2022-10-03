#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventTriggerAnimator__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventTriggerAnimator__Array__Class** type_info;
        inline app::EventTriggerAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::EventTriggerAnimator__Array__Class>(type_info, "Moon.Timeline", "EventTriggerAnimator[]");
        }
        inline app::EventTriggerAnimator__Array* create() {
            return il2cpp::create_object<app::EventTriggerAnimator__Array>(get_class());
        }
    } // namespace EventTriggerAnimator__Array
} // namespace app::classes::types
