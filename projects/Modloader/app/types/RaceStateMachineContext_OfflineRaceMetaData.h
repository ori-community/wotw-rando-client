#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RaceStateMachineContext_OfflineRaceMetaData__Class.h>
#include <Modloader/app/structs/RaceStateMachineContext_OfflineRaceMetaData.h>

namespace app::classes::types {
    namespace RaceStateMachineContext_OfflineRaceMetaData {
        inline app::RaceStateMachineContext_OfflineRaceMetaData__Class** type_info = (app::RaceStateMachineContext_OfflineRaceMetaData__Class**)(modloader::win::memory::resolve_rva(0x04776280));
        inline app::RaceStateMachineContext_OfflineRaceMetaData__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceStateMachineContext_OfflineRaceMetaData__Class>(type_info, "", "RaceStateMachineContext", "OfflineRaceMetaData");
        }
        inline app::RaceStateMachineContext_OfflineRaceMetaData* create() {
            return il2cpp::create_object<app::RaceStateMachineContext_OfflineRaceMetaData>(get_class());
        }
    } // namespace RaceStateMachineContext_OfflineRaceMetaData
} // namespace app::classes::types
