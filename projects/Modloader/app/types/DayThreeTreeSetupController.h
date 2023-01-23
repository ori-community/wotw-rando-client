#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DayThreeTreeSetupController__Class.h>
#include <Modloader/app/structs/DayThreeTreeSetupController.h>

namespace app::classes::types {
    namespace DayThreeTreeSetupController {
        namespace {
            inline app::DayThreeTreeSetupController__Class* type_info_ref = nullptr;
        }
        inline app::DayThreeTreeSetupController__Class** type_info = &type_info_ref;
        inline app::DayThreeTreeSetupController__Class* get_class() {
            return il2cpp::get_class<app::DayThreeTreeSetupController__Class>(type_info, "", "DayThreeTreeSetupController");
        }
        inline app::DayThreeTreeSetupController* create() {
            return il2cpp::create_object<app::DayThreeTreeSetupController>(get_class());
        }
    } // namespace DayThreeTreeSetupController
} // namespace app::classes::types
