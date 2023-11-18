#pragma once
#include <Modloader/app/structs/Elevator_ElevatorStop.h>
#include <Modloader/app/structs/Elevator_ElevatorStop__Array.h>
#include <Modloader/app/structs/Elevator_ElevatorStop__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Elevator_ElevatorStop {
        inline app::Elevator_ElevatorStop__Class** type_info() {
            static app::Elevator_ElevatorStop__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Elevator_ElevatorStop__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Elevator_ElevatorStop__Class* get_class() {
            return il2cpp::get_nested_class<app::Elevator_ElevatorStop__Class>(type_info(), "", "Elevator", "ElevatorStop");
        }
        inline app::Elevator_ElevatorStop* create() {
            return il2cpp::create_object<app::Elevator_ElevatorStop>(get_class());
        }
        inline app::Elevator_ElevatorStop__Array* create_array(int size) {
            return il2cpp::array_new<app::Elevator_ElevatorStop__Array>(get_class(), size);
        }
        inline app::Elevator_ElevatorStop__Array* create_array(const std::vector<app::Elevator_ElevatorStop*>& items) {
            return il2cpp::array_new<app::Elevator_ElevatorStop__Array>(get_class(), items);
        }
    } // namespace Elevator_ElevatorStop
} // namespace app::classes::types
