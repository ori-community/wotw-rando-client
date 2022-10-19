#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeTrackerForMoonGuid {
        inline app::TimeTrackerForMoonGuid__Class** type_info = (app::TimeTrackerForMoonGuid__Class**)(modloader::win::memory::resolve_rva(0x0471F860));
        inline app::TimeTrackerForMoonGuid__Class* get_class() {
            return il2cpp::get_class<app::TimeTrackerForMoonGuid__Class>(type_info, "", "TimeTrackerForMoonGuid");
        }
        inline app::TimeTrackerForMoonGuid* create() {
            return il2cpp::create_object<app::TimeTrackerForMoonGuid>(get_class());
        }
    } // namespace TimeTrackerForMoonGuid
} // namespace app::classes::types
