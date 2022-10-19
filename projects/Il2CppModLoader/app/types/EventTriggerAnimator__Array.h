#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventTriggerAnimator__Array {
        inline app::EventTriggerAnimator__Array__Class** type_info = (app::EventTriggerAnimator__Array__Class**)(modloader::win::memory::resolve_rva(0x04714138));
        inline app::EventTriggerAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::EventTriggerAnimator__Array__Class>(type_info, "Moon.Timeline", "EventTriggerAnimator[]");
        }
        inline app::EventTriggerAnimator__Array* create() {
            return il2cpp::create_object<app::EventTriggerAnimator__Array>(get_class());
        }
    } // namespace EventTriggerAnimator__Array
} // namespace app::classes::types
