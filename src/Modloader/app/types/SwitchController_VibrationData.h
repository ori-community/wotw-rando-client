#pragma once
#include <Modloader/app/structs/SwitchController_VibrationData.h>
#include <Modloader/app/structs/SwitchController_VibrationData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwitchController_VibrationData {
        inline app::SwitchController_VibrationData__Class** type_info() {
            static app::SwitchController_VibrationData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwitchController_VibrationData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwitchController_VibrationData__Class* get_class() {
            return il2cpp::get_nested_class<app::SwitchController_VibrationData__Class>(type_info(), "frameworks.Switch", "SwitchController", "VibrationData");
        }
        inline app::SwitchController_VibrationData* create() {
            return il2cpp::create_object<app::SwitchController_VibrationData>(get_class());
        }
    } // namespace SwitchController_VibrationData
} // namespace app::classes::types
