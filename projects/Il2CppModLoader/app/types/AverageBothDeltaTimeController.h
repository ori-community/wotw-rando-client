#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AverageBothDeltaTimeController {
        inline app::AverageBothDeltaTimeController__Class** type_info = (app::AverageBothDeltaTimeController__Class**)(modloader::win::memory::resolve_rva(0x0477A590));
        inline app::AverageBothDeltaTimeController__Class* get_class() {
            return il2cpp::get_class<app::AverageBothDeltaTimeController__Class>(type_info, "usedStandaloneScripts.DeltaTimeManagers", "AverageBothDeltaTimeController");
        }
        inline app::AverageBothDeltaTimeController* create() {
            return il2cpp::create_object<app::AverageBothDeltaTimeController>(get_class());
        }
    } // namespace AverageBothDeltaTimeController
} // namespace app::classes::types
