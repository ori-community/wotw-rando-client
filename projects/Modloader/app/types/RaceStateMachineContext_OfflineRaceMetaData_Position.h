#pragma once
#include <Modloader/app/structs/RaceStateMachineContext_OfflineRaceMetaData_Position.h>
#include <Modloader/app/structs/RaceStateMachineContext_OfflineRaceMetaData_Position__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceStateMachineContext_OfflineRaceMetaData_Position {
        inline app::RaceStateMachineContext_OfflineRaceMetaData_Position__Class** type_info() {
            static app::RaceStateMachineContext_OfflineRaceMetaData_Position__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceStateMachineContext_OfflineRaceMetaData_Position__Class**)(modloader::win::memory::resolve_rva(0x047675C8));
            }
            return cache;
        }
        inline app::RaceStateMachineContext_OfflineRaceMetaData_Position__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceStateMachineContext_OfflineRaceMetaData_Position__Class>(type_info(), "", "RaceStateMachineContext+OfflineRaceMetaData", "Position");
        }
        inline app::RaceStateMachineContext_OfflineRaceMetaData_Position* create() {
            return il2cpp::create_object<app::RaceStateMachineContext_OfflineRaceMetaData_Position>(get_class());
        }
    } // namespace RaceStateMachineContext_OfflineRaceMetaData_Position
} // namespace app::classes::types
