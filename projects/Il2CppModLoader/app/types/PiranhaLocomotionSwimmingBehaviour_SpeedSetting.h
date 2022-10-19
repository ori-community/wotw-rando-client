#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PiranhaLocomotionSwimmingBehaviour_SpeedSetting {
        namespace {
            inline app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Class* type_info_ref = nullptr;
        }
        inline app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Class** type_info = &type_info_ref;
        inline app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Class* get_class() {
            return il2cpp::get_nested_class<app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Class>(type_info, "", "PiranhaLocomotionSwimmingBehaviour", "SpeedSetting");
        }
        inline app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting* create() {
            return il2cpp::create_object<app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting>(get_class());
        }
        inline app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array* create_array(int size) {
            return il2cpp::array_new<app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array>(get_class(), size);
        }
        inline app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array* create_array(const std::vector<app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting*>& items) {
            return il2cpp::array_new<app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array>(get_class(), items);
        }
    } // namespace PiranhaLocomotionSwimmingBehaviour_SpeedSetting
} // namespace app::classes::types
