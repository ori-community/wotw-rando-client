#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicalSystemState_PhysicalSystemStateType__Enum {
        namespace {
            inline app::PhysicalSystemState_PhysicalSystemStateType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PhysicalSystemState_PhysicalSystemStateType__Enum__Class** type_info = &type_info_ref;
        inline app::PhysicalSystemState_PhysicalSystemStateType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicalSystemState_PhysicalSystemStateType__Enum__Class>(type_info, "", "PhysicalSystemState", "PhysicalSystemStateType");
        }
        inline app::PhysicalSystemState_PhysicalSystemStateType__Enum* create() {
            return il2cpp::create_object<app::PhysicalSystemState_PhysicalSystemStateType__Enum>(get_class());
        }
    } // namespace PhysicalSystemState_PhysicalSystemStateType__Enum
} // namespace app::classes::types
