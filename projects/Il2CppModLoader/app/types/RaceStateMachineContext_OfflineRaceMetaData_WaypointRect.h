#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceStateMachineContext_OfflineRaceMetaData_WaypointRect {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Class** type_info;
        inline app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Class>(type_info, "", "RaceStateMachineContext+OfflineRaceMetaData", "WaypointRect");
        }
        inline app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect* create() {
            return il2cpp::create_object<app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect>(get_class());
        }
        inline app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array* create_array(int size) {
            return il2cpp::array_new<app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array>(get_class(), size);
        }
        inline app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array* create_array(const std::vector<app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect*>& items) {
            return il2cpp::array_new<app::RaceStateMachineContext_OfflineRaceMetaData_WaypointRect__Array>(get_class(), items);
        }
    } // namespace RaceStateMachineContext_OfflineRaceMetaData_WaypointRect
} // namespace app::classes::types
