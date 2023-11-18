#pragma once
#include <Modloader/app/structs/TimelineOverviewGroup.h>
#include <Modloader/app/structs/TimelineOverviewGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineOverviewGroup {
        inline app::TimelineOverviewGroup__Class** type_info() {
            static app::TimelineOverviewGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineOverviewGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineOverviewGroup__Class* get_class() {
            return il2cpp::get_class<app::TimelineOverviewGroup__Class>(type_info(), "", "TimelineOverviewGroup");
        }
        inline app::TimelineOverviewGroup* create() {
            return il2cpp::create_object<app::TimelineOverviewGroup>(get_class());
        }
    } // namespace TimelineOverviewGroup
} // namespace app::classes::types
