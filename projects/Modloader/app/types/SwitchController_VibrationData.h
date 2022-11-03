#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwitchController_VibrationData {
        namespace {
            inline app::SwitchController_VibrationData__Class* type_info_ref = nullptr;
        }
        inline app::SwitchController_VibrationData__Class** type_info = &type_info_ref;
        inline app::SwitchController_VibrationData__Class* get_class() {
            return il2cpp::get_nested_class<app::SwitchController_VibrationData__Class>(type_info, "frameworks.Switch", "SwitchController", "VibrationData");
        }
        inline app::SwitchController_VibrationData* create() {
            return il2cpp::create_object<app::SwitchController_VibrationData>(get_class());
        }
    } // namespace SwitchController_VibrationData
} // namespace app::classes::types
