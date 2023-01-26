#pragma once
#include <Modloader/app/structs/TimeTrackerForMoonGuid_TrackerEntry__Array.h>
#include <Modloader/app/structs/TimeTrackerForMoonGuid_TrackerEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeTrackerForMoonGuid_TrackerEntry__Array {
        inline app::TimeTrackerForMoonGuid_TrackerEntry__Array__Class** type_info() {
            static app::TimeTrackerForMoonGuid_TrackerEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeTrackerForMoonGuid_TrackerEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeTrackerForMoonGuid_TrackerEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::TimeTrackerForMoonGuid_TrackerEntry__Array__Class>(type_info(), "", "TimeTrackerForMoonGuid+TrackerEntry[]");
        }
        inline app::TimeTrackerForMoonGuid_TrackerEntry__Array* create() {
            return il2cpp::create_object<app::TimeTrackerForMoonGuid_TrackerEntry__Array>(get_class());
        }
    } // namespace TimeTrackerForMoonGuid_TrackerEntry__Array
} // namespace app::classes::types
