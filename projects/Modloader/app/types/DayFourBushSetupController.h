#pragma once
#include <Modloader/app/structs/DayFourBushSetupController.h>
#include <Modloader/app/structs/DayFourBushSetupController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DayFourBushSetupController {
        inline app::DayFourBushSetupController__Class** type_info() {
            static app::DayFourBushSetupController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DayFourBushSetupController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DayFourBushSetupController__Class* get_class() {
            return il2cpp::get_class<app::DayFourBushSetupController__Class>(type_info(), "", "DayFourBushSetupController");
        }
        inline app::DayFourBushSetupController* create() {
            return il2cpp::create_object<app::DayFourBushSetupController>(get_class());
        }
    } // namespace DayFourBushSetupController
} // namespace app::classes::types
