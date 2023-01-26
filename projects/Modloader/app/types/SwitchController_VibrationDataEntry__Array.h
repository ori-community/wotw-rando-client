#pragma once
#include <Modloader/app/structs/SwitchController_VibrationDataEntry__Array.h>
#include <Modloader/app/structs/SwitchController_VibrationDataEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwitchController_VibrationDataEntry__Array {
        inline app::SwitchController_VibrationDataEntry__Array__Class** type_info() {
            static app::SwitchController_VibrationDataEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwitchController_VibrationDataEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwitchController_VibrationDataEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::SwitchController_VibrationDataEntry__Array__Class>(type_info(), "frameworks.Switch", "SwitchController+VibrationDataEntry[]");
        }
        inline app::SwitchController_VibrationDataEntry__Array* create() {
            return il2cpp::create_object<app::SwitchController_VibrationDataEntry__Array>(get_class());
        }
    } // namespace SwitchController_VibrationDataEntry__Array
} // namespace app::classes::types
