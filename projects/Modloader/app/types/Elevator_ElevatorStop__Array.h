#pragma once
#include <Modloader/app/structs/Elevator_ElevatorStop__Array.h>
#include <Modloader/app/structs/Elevator_ElevatorStop__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Elevator_ElevatorStop__Array {
        inline app::Elevator_ElevatorStop__Array__Class** type_info() {
            static app::Elevator_ElevatorStop__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Elevator_ElevatorStop__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Elevator_ElevatorStop__Array__Class* get_class() {
            return il2cpp::get_class<app::Elevator_ElevatorStop__Array__Class>(type_info(), "", "Elevator+ElevatorStop[]");
        }
        inline app::Elevator_ElevatorStop__Array* create() {
            return il2cpp::create_object<app::Elevator_ElevatorStop__Array>(get_class());
        }
    } // namespace Elevator_ElevatorStop__Array
} // namespace app::classes::types
