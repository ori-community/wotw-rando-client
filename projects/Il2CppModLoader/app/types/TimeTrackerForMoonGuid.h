#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeTrackerForMoonGuid {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeTrackerForMoonGuid__Class** type_info;
        inline app::TimeTrackerForMoonGuid__Class* get_class() {
            return il2cpp::get_class<app::TimeTrackerForMoonGuid__Class>(type_info, "", "TimeTrackerForMoonGuid");
        }
        inline app::TimeTrackerForMoonGuid* create() {
            return il2cpp::create_object<app::TimeTrackerForMoonGuid>(get_class());
        }
    } // namespace TimeTrackerForMoonGuid
} // namespace app::classes::types
