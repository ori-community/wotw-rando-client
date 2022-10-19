#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeTrackerForMoonGuid_TrackerEntry {
        inline app::TimeTrackerForMoonGuid_TrackerEntry__Class** type_info = (app::TimeTrackerForMoonGuid_TrackerEntry__Class**)(modloader::win::memory::resolve_rva(0x0476B2E8));
        inline app::TimeTrackerForMoonGuid_TrackerEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeTrackerForMoonGuid_TrackerEntry__Class>(type_info, "", "TimeTrackerForMoonGuid", "TrackerEntry");
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
