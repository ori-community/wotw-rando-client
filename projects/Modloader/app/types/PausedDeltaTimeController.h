#pragma once
#include <Modloader/app/structs/PausedDeltaTimeController.h>
#include <Modloader/app/structs/PausedDeltaTimeController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PausedDeltaTimeController {
        inline app::PausedDeltaTimeController__Class** type_info() {
            static app::PausedDeltaTimeController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PausedDeltaTimeController__Class**)(modloader::win::memory::resolve_rva(0x04709348));
            }
            return cache;
        }
        inline app::PausedDeltaTimeController__Class* get_class() {
            return il2cpp::get_class<app::PausedDeltaTimeController__Class>(type_info(), "usedStandaloneScripts.DeltaTimeManagers", "PausedDeltaTimeController");
        }
        inline app::PausedDeltaTimeController* create() {
            return il2cpp::create_object<app::PausedDeltaTimeController>(get_class());
        }
    } // namespace PausedDeltaTimeController
} // namespace app::classes::types
