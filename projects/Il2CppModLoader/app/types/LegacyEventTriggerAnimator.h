#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyEventTriggerAnimator {
        namespace {
            app::LegacyEventTriggerAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyEventTriggerAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyEventTriggerAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyEventTriggerAnimator__Class>(type_info, "", "LegacyEventTriggerAnimator");
        }
        inline app::LegacyEventTriggerAnimator* create() {
            return il2cpp::create_object<app::LegacyEventTriggerAnimator>(get_class());
        }
    } // namespace LegacyEventTriggerAnimator
} // namespace app::classes::types
