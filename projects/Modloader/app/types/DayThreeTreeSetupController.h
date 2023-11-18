#pragma once
#include <Modloader/app/structs/DayThreeTreeSetupController.h>
#include <Modloader/app/structs/DayThreeTreeSetupController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DayThreeTreeSetupController {
        inline app::DayThreeTreeSetupController__Class** type_info() {
            static app::DayThreeTreeSetupController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DayThreeTreeSetupController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DayThreeTreeSetupController__Class* get_class() {
            return il2cpp::get_class<app::DayThreeTreeSetupController__Class>(type_info(), "", "DayThreeTreeSetupController");
        }
        inline app::DayThreeTreeSetupController* create() {
            return il2cpp::create_object<app::DayThreeTreeSetupController>(get_class());
        }
    } // namespace DayThreeTreeSetupController
} // namespace app::classes::types
