#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyEventTriggerAnimator__Class.h>
#include <Modloader/app/structs/LegacyEventTriggerAnimator.h>

namespace app::classes::types {
    namespace LegacyEventTriggerAnimator {
        namespace {
            inline app::LegacyEventTriggerAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacyEventTriggerAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyEventTriggerAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyEventTriggerAnimator__Class>(type_info, "", "LegacyEventTriggerAnimator");
        }
        inline app::LegacyEventTriggerAnimator* create() {
            return il2cpp::create_object<app::LegacyEventTriggerAnimator>(get_class());
        }
    } // namespace LegacyEventTriggerAnimator
} // namespace app::classes::types
