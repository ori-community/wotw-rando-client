#pragma once
#include <Modloader/app/structs/TimelineConstrainedTimelineEntity.h>
#include <Modloader/app/structs/TimelineConstrainedTimelineEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineConstrainedTimelineEntity {
        inline app::TimelineConstrainedTimelineEntity__Class** type_info() {
            static app::TimelineConstrainedTimelineEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimelineConstrainedTimelineEntity__Class**)(modloader::win::memory::resolve_rva(0x0473AF90));
            }
            return cache;
        }
        inline app::TimelineConstrainedTimelineEntity__Class* get_class() {
            return il2cpp::get_class<app::TimelineConstrainedTimelineEntity__Class>(type_info(), "Moon.Timeline", "TimelineConstrainedTimelineEntity");
        }
        inline app::TimelineConstrainedTimelineEntity* create() {
            return il2cpp::create_object<app::TimelineConstrainedTimelineEntity>(get_class());
        }
    } // namespace TimelineConstrainedTimelineEntity
} // namespace app::classes::types
