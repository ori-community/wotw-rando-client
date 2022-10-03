#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AverageBothDeltaTimeController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AverageBothDeltaTimeController__Class** type_info;
        inline app::AverageBothDeltaTimeController__Class* get_class() {
            return il2cpp::get_class<app::AverageBothDeltaTimeController__Class>(type_info, "usedStandaloneScripts.DeltaTimeManagers", "AverageBothDeltaTimeController");
        }
        inline app::AverageBothDeltaTimeController* create() {
            return il2cpp::create_object<app::AverageBothDeltaTimeController>(get_class());
        }
    } // namespace AverageBothDeltaTimeController
} // namespace app::classes::types
