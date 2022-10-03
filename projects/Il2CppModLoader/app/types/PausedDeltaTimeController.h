#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PausedDeltaTimeController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PausedDeltaTimeController__Class** type_info;
        inline app::PausedDeltaTimeController__Class* get_class() {
            return il2cpp::get_class<app::PausedDeltaTimeController__Class>(type_info, "usedStandaloneScripts.DeltaTimeManagers", "PausedDeltaTimeController");
        }
        inline app::PausedDeltaTimeController* create() {
            return il2cpp::create_object<app::PausedDeltaTimeController>(get_class());
        }
    } // namespace PausedDeltaTimeController
} // namespace app::classes::types
