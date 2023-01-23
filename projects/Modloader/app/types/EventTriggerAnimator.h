#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EventTriggerAnimator__Class.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/EventTriggerAnimator__Array.h>

namespace app::classes::types {
    namespace EventTriggerAnimator {
        namespace {
            inline app::EventTriggerAnimator__Class* type_info_ref = nullptr;
        }
        inline app::EventTriggerAnimator__Class** type_info = &type_info_ref;
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
