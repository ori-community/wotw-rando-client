#pragma once
#include <Modloader/app/structs/IDeltaTimeController.h>
#include <Modloader/app/structs/IDeltaTimeController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDeltaTimeController {
        inline app::IDeltaTimeController__Class** type_info() {
            static app::IDeltaTimeController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDeltaTimeController__Class**)(modloader::win::memory::resolve_rva(0x0477F3F0));
            }
            return cache;
        }
        inline app::IDeltaTimeController__Class* get_class() {
            return il2cpp::get_class<app::IDeltaTimeController__Class>(type_info(), "usedStandaloneScripts.DeltaTimeManagers", "IDeltaTimeController");
        }
    } // namespace IDeltaTimeController
} // namespace app::classes::types
