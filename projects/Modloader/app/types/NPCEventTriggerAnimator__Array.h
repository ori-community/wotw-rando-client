#pragma once
#include <Modloader/app/structs/NPCEventTriggerAnimator__Array.h>
#include <Modloader/app/structs/NPCEventTriggerAnimator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NPCEventTriggerAnimator__Array {
        inline app::NPCEventTriggerAnimator__Array__Class** type_info() {
            static app::NPCEventTriggerAnimator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NPCEventTriggerAnimator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NPCEventTriggerAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::NPCEventTriggerAnimator__Array__Class>(type_info(), "Moon.Timeline", "NPCEventTriggerAnimator[]");
        }
        inline app::NPCEventTriggerAnimator__Array* create() {
            return il2cpp::create_object<app::NPCEventTriggerAnimator__Array>(get_class());
        }
    } // namespace NPCEventTriggerAnimator__Array
} // namespace app::classes::types
