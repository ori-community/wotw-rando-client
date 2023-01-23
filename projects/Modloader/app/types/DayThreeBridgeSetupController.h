#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DayThreeBridgeSetupController__Class.h>
#include <Modloader/app/structs/DayThreeBridgeSetupController.h>

namespace app::classes::types {
    namespace DayThreeBridgeSetupController {
        namespace {
            inline app::DayThreeBridgeSetupController__Class* type_info_ref = nullptr;
        }
        inline app::DayThreeBridgeSetupController__Class** type_info = &type_info_ref;
        inline app::DayThreeBridgeSetupController__Class* get_class() {
            return il2cpp::get_class<app::DayThreeBridgeSetupController__Class>(type_info, "", "DayThreeBridgeSetupController");
        }
        inline app::DayThreeBridgeSetupController* create() {
            return il2cpp::create_object<app::DayThreeBridgeSetupController>(get_class());
        }
    } // namespace DayThreeBridgeSetupController
} // namespace app::classes::types
