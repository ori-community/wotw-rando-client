#pragma once
#include <Modloader/app/structs/NPCEventTriggerAnimator.h>
#include <Modloader/app/structs/NPCEventTriggerAnimator__Array.h>
#include <Modloader/app/structs/NPCEventTriggerAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NPCEventTriggerAnimator {
        inline app::NPCEventTriggerAnimator__Class** type_info() {
            static app::NPCEventTriggerAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NPCEventTriggerAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NPCEventTriggerAnimator__Class* get_class() {
            return il2cpp::get_class<app::NPCEventTriggerAnimator__Class>(type_info(), "Moon.Timeline", "NPCEventTriggerAnimator");
        }
        inline app::NPCEventTriggerAnimator* create() {
            return il2cpp::create_object<app::NPCEventTriggerAnimator>(get_class());
        }
        inline app::NPCEventTriggerAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::NPCEventTriggerAnimator__Array>(get_class(), size);
        }
        inline app::NPCEventTriggerAnimator__Array* create_array(const std::vector<app::NPCEventTriggerAnimator*>& items) {
            return il2cpp::array_new<app::NPCEventTriggerAnimator__Array>(get_class(), items);
        }
    } // namespace NPCEventTriggerAnimator
} // namespace app::classes::types
