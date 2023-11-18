#pragma once
#include <Modloader/app/structs/TimelineState_NewTimelineStateTempHook.h>
#include <Modloader/app/structs/TimelineState_NewTimelineStateTempHook__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineState_NewTimelineStateTempHook {
        inline app::TimelineState_NewTimelineStateTempHook__Class** type_info() {
            static app::TimelineState_NewTimelineStateTempHook__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimelineState_NewTimelineStateTempHook__Class**)(modloader::win::memory::resolve_rva(0x04732978));
            }
            return cache;
        }
        inline app::TimelineState_NewTimelineStateTempHook__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineState_NewTimelineStateTempHook__Class>(type_info(), "Moon.Timeline", "TimelineState", "NewTimelineStateTempHook");
        }
        inline app::TimelineState_NewTimelineStateTempHook* create() {
            return il2cpp::create_object<app::TimelineState_NewTimelineStateTempHook>(get_class());
        }
    } // namespace TimelineState_NewTimelineStateTempHook
} // namespace app::classes::types
