#pragma once
#include <Modloader/app/structs/EventTriggerAnimator__Array.h>
#include <Modloader/app/structs/EventTriggerAnimator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventTriggerAnimator__Array {
        inline app::EventTriggerAnimator__Array__Class** type_info() {
            static app::EventTriggerAnimator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventTriggerAnimator__Array__Class**)(modloader::win::memory::resolve_rva(0x04714138));
            }
            return cache;
        }
        inline app::EventTriggerAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::EventTriggerAnimator__Array__Class>(type_info(), "Moon.Timeline", "EventTriggerAnimator[]");
        }
        inline app::EventTriggerAnimator__Array* create() {
            return il2cpp::create_object<app::EventTriggerAnimator__Array>(get_class());
        }
    } // namespace EventTriggerAnimator__Array
} // namespace app::classes::types
