#pragma once
#include <Modloader/app/structs/PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array.h>
#include <Modloader/app/structs/PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array {
        inline app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array__Class** type_info() {
            static app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array__Class* get_class() {
            return il2cpp::get_class<app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array__Class>(type_info(), "", "PiranhaLocomotionSwimmingBehaviour+SpeedSetting[]");
        }
        inline app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array* create() {
            return il2cpp::create_object<app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array>(get_class());
        }
    } // namespace PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array
} // namespace app::classes::types
