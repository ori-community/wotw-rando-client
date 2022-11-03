#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventTriggerAnimatorCondition {
        namespace {
            inline app::EventTriggerAnimatorCondition__Class* type_info_ref = nullptr;
        }
        inline app::EventTriggerAnimatorCondition__Class** type_info = &type_info_ref;
        inline app::EventTriggerAnimatorCondition__Class* get_class() {
            return il2cpp::get_class<app::EventTriggerAnimatorCondition__Class>(type_info, "", "EventTriggerAnimatorCondition");
        }
        inline app::EventTriggerAnimatorCondition* create() {
            return il2cpp::create_object<app::EventTriggerAnimatorCondition>(get_class());
        }
    } // namespace EventTriggerAnimatorCondition
} // namespace app::classes::types
