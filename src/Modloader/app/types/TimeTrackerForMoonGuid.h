#pragma once
#include <Modloader/app/structs/TimeTrackerForMoonGuid.h>
#include <Modloader/app/structs/TimeTrackerForMoonGuid__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeTrackerForMoonGuid {
        inline app::TimeTrackerForMoonGuid__Class** type_info() {
            static app::TimeTrackerForMoonGuid__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeTrackerForMoonGuid__Class**)(modloader::win::memory::resolve_rva(0x0471F860));
            }
            return cache;
        }
        inline app::TimeTrackerForMoonGuid__Class* get_class() {
            return il2cpp::get_class<app::TimeTrackerForMoonGuid__Class>(type_info(), "", "TimeTrackerForMoonGuid");
        }
        inline app::TimeTrackerForMoonGuid* create() {
            return il2cpp::create_object<app::TimeTrackerForMoonGuid>(get_class());
        }
    } // namespace TimeTrackerForMoonGuid
} // namespace app::classes::types
