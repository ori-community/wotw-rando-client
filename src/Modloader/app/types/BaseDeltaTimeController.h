#pragma once
#include <Modloader/app/structs/BaseDeltaTimeController.h>
#include <Modloader/app/structs/BaseDeltaTimeController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseDeltaTimeController {
        inline app::BaseDeltaTimeController__Class** type_info() {
            static app::BaseDeltaTimeController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseDeltaTimeController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseDeltaTimeController__Class* get_class() {
            return il2cpp::get_class<app::BaseDeltaTimeController__Class>(type_info(), "usedStandaloneScripts.DeltaTimeManagers", "BaseDeltaTimeController");
        }
        inline app::BaseDeltaTimeController* create() {
            return il2cpp::create_object<app::BaseDeltaTimeController>(get_class());
        }
    } // namespace BaseDeltaTimeController
} // namespace app::classes::types
