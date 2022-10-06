#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwitchController_VibrationDataEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SwitchController_VibrationDataEntry__Class** type_info;
        inline app::SwitchController_VibrationDataEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::SwitchController_VibrationDataEntry__Class>(type_info, "frameworks.Switch", "SwitchController", "VibrationDataEntry");
        }
        inline app::SwitchController_VibrationDataEntry* create() {
            return il2cpp::create_object<app::SwitchController_VibrationDataEntry>(get_class());
        }
        inline app::SwitchController_VibrationDataEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::SwitchController_VibrationDataEntry__Array>(get_class(), size);
        }
        inline app::SwitchController_VibrationDataEntry__Array* create_array(const std::vector<app::SwitchController_VibrationDataEntry*>& items) {
            return il2cpp::array_new<app::SwitchController_VibrationDataEntry__Array>(get_class(), items);
        }
    } // namespace SwitchController_VibrationDataEntry
} // namespace app::classes::types
