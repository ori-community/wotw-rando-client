#pragma once
#include <Modloader/app/structs/PiranhaLocomotionSwimmingBehaviour_SpeedSetting.h>
#include <Modloader/app/structs/PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array.h>
#include <Modloader/app/structs/PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PiranhaLocomotionSwimmingBehaviour_SpeedSetting {
        inline app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Class** type_info() {
            static app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Class* get_class() {
            return il2cpp::get_nested_class<app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Class>(type_info(), "", "PiranhaLocomotionSwimmingBehaviour", "SpeedSetting");
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
