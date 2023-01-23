#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FixedDeltaTimeController__Class.h>
#include <Modloader/app/structs/FixedDeltaTimeController.h>

namespace app::classes::types {
    namespace FixedDeltaTimeController {
        inline app::FixedDeltaTimeController__Class** type_info = (app::FixedDeltaTimeController__Class**)(modloader::win::memory::resolve_rva(0x0476EC30));
        inline app::FixedDeltaTimeController__Class* get_class() {
            return il2cpp::get_class<app::FixedDeltaTimeController__Class>(type_info, "usedStandaloneScripts.DeltaTimeManagers", "FixedDeltaTimeController");
        }
        inline app::FixedDeltaTimeController* create() {
            return il2cpp::create_object<app::FixedDeltaTimeController>(get_class());
        }
    } // namespace FixedDeltaTimeController
} // namespace app::classes::types
