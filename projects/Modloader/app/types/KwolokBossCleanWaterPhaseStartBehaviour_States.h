#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossCleanWaterPhaseStartBehaviour_States {
        inline app::KwolokBossCleanWaterPhaseStartBehaviour_States__Class** type_info = (app::KwolokBossCleanWaterPhaseStartBehaviour_States__Class**)(modloader::win::memory::resolve_rva(0x0476F418));
        inline app::KwolokBossCleanWaterPhaseStartBehaviour_States__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossCleanWaterPhaseStartBehaviour_States__Class>(type_info, "", "KwolokBossCleanWaterPhaseStartBehaviour", "States");
        }
        inline app::KwolokBossCleanWaterPhaseStartBehaviour_States* create() {
            return il2cpp::create_object<app::KwolokBossCleanWaterPhaseStartBehaviour_States>(get_class());
        }
    } // namespace KwolokBossCleanWaterPhaseStartBehaviour_States
} // namespace app::classes::types
