#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineState_NewTimelineStateTempHook {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimelineState_NewTimelineStateTempHook__Class** type_info;
        inline app::TimelineState_NewTimelineStateTempHook__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineState_NewTimelineStateTempHook__Class>(type_info, "Moon.Timeline", "TimelineState", "NewTimelineStateTempHook");
        }
        inline app::TimelineState_NewTimelineStateTempHook* create() {
            return il2cpp::create_object<app::TimelineState_NewTimelineStateTempHook>(get_class());
        }
    } // namespace TimelineState_NewTimelineStateTempHook
} // namespace app::classes::types
