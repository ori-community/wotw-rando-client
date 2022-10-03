#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceStateMachineContext_OfflineRaceMetaData_Position {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceStateMachineContext_OfflineRaceMetaData_Position__Class** type_info;
        inline app::RaceStateMachineContext_OfflineRaceMetaData_Position__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceStateMachineContext_OfflineRaceMetaData_Position__Class>(type_info, "", "RaceStateMachineContext+OfflineRaceMetaData", "Position");
        }
        inline app::RaceStateMachineContext_OfflineRaceMetaData_Position* create() {
            return il2cpp::create_object<app::RaceStateMachineContext_OfflineRaceMetaData_Position>(get_class());
        }
    } // namespace RaceStateMachineContext_OfflineRaceMetaData_Position
} // namespace app::classes::types
