#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineEventTrigger__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimelineEventTrigger__Array__Class** type_info;
        inline app::TimelineEventTrigger__Array__Class* get_class() {
            return il2cpp::get_class<app::TimelineEventTrigger__Array__Class>(type_info, "", "TimelineEventTrigger[]");
        }
        inline app::TimelineEventTrigger__Array* create() {
            return il2cpp::create_object<app::TimelineEventTrigger__Array>(get_class());
        }
    } // namespace TimelineEventTrigger__Array
} // namespace app::classes::types
