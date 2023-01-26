#pragma once
#include <Modloader/app/structs/LegacyEventTriggerAnimator.h>
#include <Modloader/app/structs/LegacyEventTriggerAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyEventTriggerAnimator {
        inline app::LegacyEventTriggerAnimator__Class** type_info() {
            static app::LegacyEventTriggerAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyEventTriggerAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyEventTriggerAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyEventTriggerAnimator__Class>(type_info(), "", "LegacyEventTriggerAnimator");
        }
        inline app::LegacyEventTriggerAnimator* create() {
            return il2cpp::create_object<app::LegacyEventTriggerAnimator>(get_class());
        }
    } // namespace LegacyEventTriggerAnimator
} // namespace app::classes::types
