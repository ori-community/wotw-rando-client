#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaseDeltaTimeController {
        namespace {
            inline app::BaseDeltaTimeController__Class* type_info_ref = nullptr;
        }
        inline app::BaseDeltaTimeController__Class** type_info = &type_info_ref;
        inline app::BaseDeltaTimeController__Class* get_class() {
            return il2cpp::get_class<app::BaseDeltaTimeController__Class>(type_info, "usedStandaloneScripts.DeltaTimeManagers", "BaseDeltaTimeController");
        }
        inline app::BaseDeltaTimeController* create() {
            return il2cpp::create_object<app::BaseDeltaTimeController>(get_class());
        }
    } // namespace BaseDeltaTimeController
} // namespace app::classes::types
