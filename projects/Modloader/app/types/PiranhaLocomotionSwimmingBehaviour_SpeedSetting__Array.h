#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array {
        namespace {
            inline app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array__Class* type_info_ref = nullptr;
        }
        inline app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array__Class** type_info = &type_info_ref;
        inline app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array__Class* get_class() {
            return il2cpp::get_class<app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array__Class>(type_info, "", "PiranhaLocomotionSwimmingBehaviour+SpeedSetting[]");
        }
        inline app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array* create() {
            return il2cpp::create_object<app::PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array>(get_class());
        }
    } // namespace PiranhaLocomotionSwimmingBehaviour_SpeedSetting__Array
} // namespace app::classes::types
