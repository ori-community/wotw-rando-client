#pragma once
#include <Modloader/app/structs/KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState.h>
#include <Modloader/app/structs/KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState {
        inline app::KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState__Class** type_info() {
            static app::KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState__Class**)(modloader::win::memory::resolve_rva(0x0476C520));
            }
            return cache;
        }
        inline app::KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState__Class>(type_info(), "", "KwolokBossCleanWaterPhaseStartBehaviour", "BreakArenaState");
        }
        inline app::KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState* create() {
            return il2cpp::create_object<app::KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState>(get_class());
        }
    } // namespace KwolokBossCleanWaterPhaseStartBehaviour_BreakArenaState
} // namespace app::classes::types
