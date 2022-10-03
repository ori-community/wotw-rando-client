#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DirectDeltaTimeController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DirectDeltaTimeController__Class** type_info;
        inline app::DirectDeltaTimeController__Class* get_class() {
            return il2cpp::get_class<app::DirectDeltaTimeController__Class>(type_info, "usedStandaloneScripts.DeltaTimeManagers", "DirectDeltaTimeController");
        }
        inline app::DirectDeltaTimeController* create() {
            return il2cpp::create_object<app::DirectDeltaTimeController>(get_class());
        }
    } // namespace DirectDeltaTimeController
} // namespace app::classes::types
