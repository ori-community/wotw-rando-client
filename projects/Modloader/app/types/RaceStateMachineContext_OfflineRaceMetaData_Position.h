#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RaceStateMachineContext_OfflineRaceMetaData_Position__Class.h>
#include <Modloader/app/structs/RaceStateMachineContext_OfflineRaceMetaData_Position.h>

namespace app::classes::types {
    namespace RaceStateMachineContext_OfflineRaceMetaData_Position {
        inline app::RaceStateMachineContext_OfflineRaceMetaData_Position__Class** type_info = (app::RaceStateMachineContext_OfflineRaceMetaData_Position__Class**)(modloader::win::memory::resolve_rva(0x047675C8));
        inline app::RaceStateMachineContext_OfflineRaceMetaData_Position__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceStateMachineContext_OfflineRaceMetaData_Position__Class>(type_info, "", "RaceStateMachineContext+OfflineRaceMetaData", "Position");
        }
        inline app::RaceStateMachineContext_OfflineRaceMetaData_Position* create() {
            return il2cpp::create_object<app::RaceStateMachineContext_OfflineRaceMetaData_Position>(get_class());
        }
    } // namespace RaceStateMachineContext_OfflineRaceMetaData_Position
} // namespace app::classes::types
