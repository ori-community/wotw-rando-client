#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState {
        namespace {
            inline app::KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState__Class** type_info = &type_info_ref;
        inline app::KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState__Class>(type_info, "", "KwolokBossCleanWaterPhaseStartBehaviour", "KwolokBossCleanWaterPhaseStartState");
        }
        inline app::KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState* create() {
            return il2cpp::create_object<app::KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState>(get_class());
        }
    } // namespace KwolokBossCleanWaterPhaseStartBehaviour_KwolokBossCleanWaterPhaseStartState
} // namespace app::classes::types
