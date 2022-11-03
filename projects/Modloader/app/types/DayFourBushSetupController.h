#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DayFourBushSetupController {
        namespace {
            inline app::DayFourBushSetupController__Class* type_info_ref = nullptr;
        }
        inline app::DayFourBushSetupController__Class** type_info = &type_info_ref;
        inline app::DayFourBushSetupController__Class* get_class() {
            return il2cpp::get_class<app::DayFourBushSetupController__Class>(type_info, "", "DayFourBushSetupController");
        }
        inline app::DayFourBushSetupController* create() {
            return il2cpp::create_object<app::DayFourBushSetupController>(get_class());
        }
    } // namespace DayFourBushSetupController
} // namespace app::classes::types
