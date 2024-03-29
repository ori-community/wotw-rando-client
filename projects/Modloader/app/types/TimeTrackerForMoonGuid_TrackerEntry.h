#pragma once
#include <Modloader/app/structs/TimeTrackerForMoonGuid_TrackerEntry.h>
#include <Modloader/app/structs/TimeTrackerForMoonGuid_TrackerEntry__Array.h>
#include <Modloader/app/structs/TimeTrackerForMoonGuid_TrackerEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeTrackerForMoonGuid_TrackerEntry {
        inline app::TimeTrackerForMoonGuid_TrackerEntry__Class** type_info() {
            static app::TimeTrackerForMoonGuid_TrackerEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeTrackerForMoonGuid_TrackerEntry__Class**)(modloader::win::memory::resolve_rva(0x0476B2E8));
            }
            return cache;
        }
        inline app::TimeTrackerForMoonGuid_TrackerEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeTrackerForMoonGuid_TrackerEntry__Class>(type_info(), "", "TimeTrackerForMoonGuid", "TrackerEntry");
        }
        inline app::TimeTrackerForMoonGuid_TrackerEntry* create() {
            return il2cpp::create_object<app::TimeTrackerForMoonGuid_TrackerEntry>(get_class());
        }
        inline app::TimeTrackerForMoonGuid_TrackerEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::TimeTrackerForMoonGuid_TrackerEntry__Array>(get_class(), size);
        }
        inline app::TimeTrackerForMoonGuid_TrackerEntry__Array* create_array(const std::vector<app::TimeTrackerForMoonGuid_TrackerEntry*>& items) {
            return il2cpp::array_new<app::TimeTrackerForMoonGuid_TrackerEntry__Array>(get_class(), items);
        }
    } // namespace TimeTrackerForMoonGuid_TrackerEntry
} // namespace app::classes::types
