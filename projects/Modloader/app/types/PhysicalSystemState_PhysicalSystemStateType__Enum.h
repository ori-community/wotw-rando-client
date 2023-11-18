#pragma once
#include <Modloader/app/structs/PhysicalSystemState_PhysicalSystemStateType__Enum.h>
#include <Modloader/app/structs/PhysicalSystemState_PhysicalSystemStateType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicalSystemState_PhysicalSystemStateType__Enum {
        inline app::PhysicalSystemState_PhysicalSystemStateType__Enum__Class** type_info() {
            static app::PhysicalSystemState_PhysicalSystemStateType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicalSystemState_PhysicalSystemStateType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicalSystemState_PhysicalSystemStateType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicalSystemState_PhysicalSystemStateType__Enum__Class>(type_info(), "", "PhysicalSystemState", "PhysicalSystemStateType");
        }
        inline app::PhysicalSystemState_PhysicalSystemStateType__Enum* create() {
            return il2cpp::create_object<app::PhysicalSystemState_PhysicalSystemStateType__Enum>(get_class());
        }
    } // namespace PhysicalSystemState_PhysicalSystemStateType__Enum
} // namespace app::classes::types
