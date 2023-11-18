#pragma once
#include <Modloader/app/structs/DayThreeBridgeSetupController.h>
#include <Modloader/app/structs/DayThreeBridgeSetupController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DayThreeBridgeSetupController {
        inline app::DayThreeBridgeSetupController__Class** type_info() {
            static app::DayThreeBridgeSetupController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DayThreeBridgeSetupController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DayThreeBridgeSetupController__Class* get_class() {
            return il2cpp::get_class<app::DayThreeBridgeSetupController__Class>(type_info(), "", "DayThreeBridgeSetupController");
        }
        inline app::DayThreeBridgeSetupController* create() {
            return il2cpp::create_object<app::DayThreeBridgeSetupController>(get_class());
        }
    } // namespace DayThreeBridgeSetupController
} // namespace app::classes::types
