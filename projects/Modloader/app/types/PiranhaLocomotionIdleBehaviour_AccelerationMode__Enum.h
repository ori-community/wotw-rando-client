#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum {
        inline app::PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum__Class** type_info = (app::PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04725728));
        inline app::PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum__Class>(type_info, "", "PiranhaLocomotionIdleBehaviour", "AccelerationMode");
        }
        inline app::PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum* create() {
            return il2cpp::create_object<app::PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum>(get_class());
        }
    } // namespace PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum
} // namespace app::classes::types
