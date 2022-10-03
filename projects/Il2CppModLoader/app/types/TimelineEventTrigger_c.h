#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineEventTrigger_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimelineEventTrigger_c__Class** type_info;
        inline app::TimelineEventTrigger_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineEventTrigger_c__Class>(type_info, "", "TimelineEventTrigger", "<>c");
        }
        inline app::TimelineEventTrigger_c* create() {
            return il2cpp::create_object<app::TimelineEventTrigger_c>(get_class());
        }
    } // namespace TimelineEventTrigger_c
} // namespace app::classes::types
