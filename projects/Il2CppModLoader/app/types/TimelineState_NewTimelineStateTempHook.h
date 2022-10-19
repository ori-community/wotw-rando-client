#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineState_NewTimelineStateTempHook {
        inline app::TimelineState_NewTimelineStateTempHook__Class** type_info = (app::TimelineState_NewTimelineStateTempHook__Class**)(modloader::win::memory::resolve_rva(0x04732978));
        inline app::TimelineState_NewTimelineStateTempHook__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineState_NewTimelineStateTempHook__Class>(type_info, "Moon.Timeline", "TimelineState", "NewTimelineStateTempHook");
        }
        inline app::TimelineState_NewTimelineStateTempHook* create() {
            return il2cpp::create_object<app::TimelineState_NewTimelineStateTempHook>(get_class());
        }
    } // namespace TimelineState_NewTimelineStateTempHook
} // namespace app::classes::types
