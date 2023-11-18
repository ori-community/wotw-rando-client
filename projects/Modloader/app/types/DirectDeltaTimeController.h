#pragma once
#include <Modloader/app/structs/DirectDeltaTimeController.h>
#include <Modloader/app/structs/DirectDeltaTimeController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DirectDeltaTimeController {
        inline app::DirectDeltaTimeController__Class** type_info() {
            static app::DirectDeltaTimeController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DirectDeltaTimeController__Class**)(modloader::win::memory::resolve_rva(0x04708340));
            }
            return cache;
        }
        inline app::DirectDeltaTimeController__Class* get_class() {
            return il2cpp::get_class<app::DirectDeltaTimeController__Class>(type_info(), "usedStandaloneScripts.DeltaTimeManagers", "DirectDeltaTimeController");
        }
        inline app::DirectDeltaTimeController* create() {
            return il2cpp::create_object<app::DirectDeltaTimeController>(get_class());
        }
    } // namespace DirectDeltaTimeController
} // namespace app::classes::types
