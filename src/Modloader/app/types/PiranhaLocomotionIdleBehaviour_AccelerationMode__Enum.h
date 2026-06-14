#pragma once
#include <Modloader/app/structs/PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum.h>
#include <Modloader/app/structs/PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum {
        inline app::PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum__Class** type_info() {
            static app::PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04725728));
            }
            return cache;
        }
        inline app::PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum__Class>(type_info(), "", "PiranhaLocomotionIdleBehaviour", "AccelerationMode");
        }
        inline app::PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum* create() {
            return il2cpp::create_object<app::PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum>(get_class());
        }
    } // namespace PiranhaLocomotionIdleBehaviour_AccelerationMode__Enum
} // namespace app::classes::types
