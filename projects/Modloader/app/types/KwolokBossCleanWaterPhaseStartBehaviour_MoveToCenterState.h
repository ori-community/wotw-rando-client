#pragma once
#include <Modloader/app/structs/KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState.h>
#include <Modloader/app/structs/KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState {
        inline app::KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState__Class** type_info() {
            static app::KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState__Class**)(modloader::win::memory::resolve_rva(0x04782D88));
            }
            return cache;
        }
        inline app::KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState__Class>(type_info(), "", "KwolokBossCleanWaterPhaseStartBehaviour", "MoveToCenterState");
        }
        inline app::KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState* create() {
            return il2cpp::create_object<app::KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState>(get_class());
        }
    } // namespace KwolokBossCleanWaterPhaseStartBehaviour_MoveToCenterState
} // namespace app::classes::types
