#pragma once
#include <Modloader/app/structs/DesiredUberStateDoor_DoorState__Enum.h>
#include <Modloader/app/structs/DesiredUberStateDoor_DoorState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateDoor_DoorState__Enum {
        inline app::DesiredUberStateDoor_DoorState__Enum__Class** type_info() {
            static app::DesiredUberStateDoor_DoorState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DesiredUberStateDoor_DoorState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DesiredUberStateDoor_DoorState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DesiredUberStateDoor_DoorState__Enum__Class>(type_info(), "", "DesiredUberStateDoor", "DoorState");
        }
        inline app::DesiredUberStateDoor_DoorState__Enum* create() {
            return il2cpp::create_object<app::DesiredUberStateDoor_DoorState__Enum>(get_class());
        }
    } // namespace DesiredUberStateDoor_DoorState__Enum
} // namespace app::classes::types
