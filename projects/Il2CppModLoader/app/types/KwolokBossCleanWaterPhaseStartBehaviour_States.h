#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossCleanWaterPhaseStartBehaviour_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossCleanWaterPhaseStartBehaviour_States__Class** type_info;
        inline app::KwolokBossCleanWaterPhaseStartBehaviour_States__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossCleanWaterPhaseStartBehaviour_States__Class>(type_info, "", "KwolokBossCleanWaterPhaseStartBehaviour", "States");
        }
        inline app::KwolokBossCleanWaterPhaseStartBehaviour_States* create() {
            return il2cpp::create_object<app::KwolokBossCleanWaterPhaseStartBehaviour_States>(get_class());
        }
    } // namespace KwolokBossCleanWaterPhaseStartBehaviour_States
} // namespace app::classes::types
