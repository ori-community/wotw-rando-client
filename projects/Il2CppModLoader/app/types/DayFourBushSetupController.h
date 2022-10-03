#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DayFourBushSetupController {
        namespace {
            app::DayFourBushSetupController__Class* type_info_ref = nullptr;
        }
        app::DayFourBushSetupController__Class** type_info = &type_info_ref;
        inline app::DayFourBushSetupController__Class* get_class() {
            return il2cpp::get_class<app::DayFourBushSetupController__Class>(type_info, "", "DayFourBushSetupController");
        }
        inline app::DayFourBushSetupController* create() {
            return il2cpp::create_object<app::DayFourBushSetupController>(get_class());
        }
    } // namespace DayFourBushSetupController
} // namespace app::classes::types
