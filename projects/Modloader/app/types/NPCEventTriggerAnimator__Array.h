#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NPCEventTriggerAnimator__Array {
        namespace {
            inline app::NPCEventTriggerAnimator__Array__Class* type_info_ref = nullptr;
        }
        inline app::NPCEventTriggerAnimator__Array__Class** type_info = &type_info_ref;
        inline app::NPCEventTriggerAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::NPCEventTriggerAnimator__Array__Class>(type_info, "Moon.Timeline", "NPCEventTriggerAnimator[]");
        }
        inline app::NPCEventTriggerAnimator__Array* create() {
            return il2cpp::create_object<app::NPCEventTriggerAnimator__Array>(get_class());
        }
    } // namespace NPCEventTriggerAnimator__Array
} // namespace app::classes::types
