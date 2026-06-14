#pragma once
#include <Modloader/app/structs/EventTriggerAnimator_c.h>
#include <Modloader/app/structs/EventTriggerAnimator_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventTriggerAnimator_c {
        inline app::EventTriggerAnimator_c__Class** type_info() {
            static app::EventTriggerAnimator_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventTriggerAnimator_c__Class**)(modloader::win::memory::resolve_rva(0x0477EF00));
            }
            return cache;
        }
        inline app::EventTriggerAnimator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EventTriggerAnimator_c__Class>(type_info(), "Moon.Timeline", "EventTriggerAnimator", "<>c");
        }
        inline app::EventTriggerAnimator_c* create() {
            return il2cpp::create_object<app::EventTriggerAnimator_c>(get_class());
        }
    } // namespace EventTriggerAnimator_c
} // namespace app::classes::types
