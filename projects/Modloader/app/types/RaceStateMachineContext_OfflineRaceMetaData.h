#pragma once
#include <Modloader/app/structs/RaceStateMachineContext_OfflineRaceMetaData.h>
#include <Modloader/app/structs/RaceStateMachineContext_OfflineRaceMetaData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceStateMachineContext_OfflineRaceMetaData {
        inline app::RaceStateMachineContext_OfflineRaceMetaData__Class** type_info() {
            static app::RaceStateMachineContext_OfflineRaceMetaData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceStateMachineContext_OfflineRaceMetaData__Class**)(modloader::win::memory::resolve_rva(0x04776280));
            }
            return cache;
        }
        inline app::RaceStateMachineContext_OfflineRaceMetaData__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceStateMachineContext_OfflineRaceMetaData__Class>(type_info(), "", "RaceStateMachineContext", "OfflineRaceMetaData");
        }
        inline app::RaceStateMachineContext_OfflineRaceMetaData* create() {
            return il2cpp::create_object<app::RaceStateMachineContext_OfflineRaceMetaData>(get_class());
        }
    } // namespace RaceStateMachineContext_OfflineRaceMetaData
} // namespace app::classes::types
