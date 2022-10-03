#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwitchController_VibrationDataEntry__Array {
        namespace {
            app::SwitchController_VibrationDataEntry__Array__Class* type_info_ref = nullptr;
        }
        app::SwitchController_VibrationDataEntry__Array__Class** type_info = &type_info_ref;
        inline app::SwitchController_VibrationDataEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::SwitchController_VibrationDataEntry__Array__Class>(type_info, "frameworks.Switch", "SwitchController+VibrationDataEntry[]");
        }
        inline app::SwitchController_VibrationDataEntry__Array* create() {
            return il2cpp::create_object<app::SwitchController_VibrationDataEntry__Array>(get_class());
        }
    } // namespace SwitchController_VibrationDataEntry__Array
} // namespace app::classes::types
