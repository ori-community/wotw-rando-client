#pragma once
#include <Modloader/app/structs/AverageBothDeltaTimeController.h>
#include <Modloader/app/structs/AverageBothDeltaTimeController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AverageBothDeltaTimeController {
        inline app::AverageBothDeltaTimeController__Class** type_info() {
            static app::AverageBothDeltaTimeController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AverageBothDeltaTimeController__Class**)(modloader::win::memory::resolve_rva(0x0477A590));
            }
            return cache;
        }
        inline app::AverageBothDeltaTimeController__Class* get_class() {
            return il2cpp::get_class<app::AverageBothDeltaTimeController__Class>(type_info(), "usedStandaloneScripts.DeltaTimeManagers", "AverageBothDeltaTimeController");
        }
        inline app::AverageBothDeltaTimeController* create() {
            return il2cpp::create_object<app::AverageBothDeltaTimeController>(get_class());
        }
    } // namespace AverageBothDeltaTimeController
} // namespace app::classes::types
