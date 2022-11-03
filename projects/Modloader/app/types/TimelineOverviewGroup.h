#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineOverviewGroup {
        namespace {
            inline app::TimelineOverviewGroup__Class* type_info_ref = nullptr;
        }
        inline app::TimelineOverviewGroup__Class** type_info = &type_info_ref;
        inline app::TimelineOverviewGroup__Class* get_class() {
            return il2cpp::get_class<app::TimelineOverviewGroup__Class>(type_info, "", "TimelineOverviewGroup");
        }
        inline app::TimelineOverviewGroup* create() {
            return il2cpp::create_object<app::TimelineOverviewGroup>(get_class());
        }
    } // namespace TimelineOverviewGroup
} // namespace app::classes::types
