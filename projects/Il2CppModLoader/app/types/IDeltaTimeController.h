#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDeltaTimeController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDeltaTimeController__Class** type_info;
        inline app::IDeltaTimeController__Class* get_class() {
            return il2cpp::get_class<app::IDeltaTimeController__Class>(type_info, "usedStandaloneScripts.DeltaTimeManagers", "IDeltaTimeController");
        }
    } // namespace IDeltaTimeController
} // namespace app::classes::types
