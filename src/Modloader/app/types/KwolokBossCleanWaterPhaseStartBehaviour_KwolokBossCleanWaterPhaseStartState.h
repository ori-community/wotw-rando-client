#pragma once
#include <Modloader/app/structs/KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState.h>
#include <Modloader/app/structs/KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState {
        inline app::KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState__Class** type_info() {
            static app::KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState__Class>(type_info(), "", "KwolokBossCleanWaterPhaseStartBehaviour", "KwolokBossCleanWaterPhaseStartState");
        }
        inline app::KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState* create() {
            return il2cpp::create_object<app::KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState>(get_class());
        }
    } // namespace KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState
} // namespace app::classes::types
