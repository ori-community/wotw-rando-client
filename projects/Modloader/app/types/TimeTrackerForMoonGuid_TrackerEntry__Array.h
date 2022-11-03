#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeTrackerForMoonGuid_TrackerEntry__Array {
        namespace {
            inline app::TimeTrackerForMoonGuid_TrackerEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::TimeTrackerForMoonGuid_TrackerEntry__Array__Class** type_info = &type_info_ref;
        inline app::TimeTrackerForMoonGuid_TrackerEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::TimeTrackerForMoonGuid_TrackerEntry__Array__Class>(type_info, "", "TimeTrackerForMoonGuid+TrackerEntry[]");
        }
        inline app::TimeTrackerForMoonGuid_TrackerEntry__Array* create() {
            return il2cpp::create_object<app::TimeTrackerForMoonGuid_TrackerEntry__Array>(get_class());
        }
    } // namespace TimeTrackerForMoonGuid_TrackerEntry__Array
} // namespace app::classes::types
