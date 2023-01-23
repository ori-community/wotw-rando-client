#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Elevator_ElevatorStop__Array__Class.h>
#include <Modloader/app/structs/Elevator_ElevatorStop__Array.h>

namespace app::classes::types {
    namespace Elevator_ElevatorStop__Array {
        namespace {
            inline app::Elevator_ElevatorStop__Array__Class* type_info_ref = nullptr;
        }
        inline app::Elevator_ElevatorStop__Array__Class** type_info = &type_info_ref;
        inline app::Elevator_ElevatorStop__Array__Class* get_class() {
            return il2cpp::get_class<app::Elevator_ElevatorStop__Array__Class>(type_info, "", "Elevator+ElevatorStop[]");
        }
        inline app::Elevator_ElevatorStop__Array* create() {
            return il2cpp::create_object<app::Elevator_ElevatorStop__Array>(get_class());
        }
    } // namespace Elevator_ElevatorStop__Array
} // namespace app::classes::types
