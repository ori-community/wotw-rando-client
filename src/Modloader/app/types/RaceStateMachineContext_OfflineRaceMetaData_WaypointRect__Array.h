#pragma once
#include <Modloader/app/structs/RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array.h>
#include <Modloader/app/structs/RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array {
        inline app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array__Class** type_info() {
            static app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array__Class**)(modloader::win::memory::resolve_rva(0x04771238));
            }
            return cache;
        }
        inline app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array__Class* get_class() {
            return il2cpp::get_class<app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array__Class>(type_info(), "", "RaceStateMachineContext+OfflineRaceMetaData+WaypointRect[]");
        }
        inline app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array* create() {
            return il2cpp::create_object<app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array>(get_class());
        }
    } // namespace RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array
} // namespace app::classes::types
