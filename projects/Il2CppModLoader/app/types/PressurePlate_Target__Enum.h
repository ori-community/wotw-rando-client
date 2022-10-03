#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PressurePlate_Target__Enum {
        namespace {
            app::PressurePlate_Target__Enum__Class* type_info_ref = nullptr;
        }
        app::PressurePlate_Target__Enum__Class** type_info = &type_info_ref;
        inline app::PressurePlate_Target__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PressurePlate_Target__Enum__Class>(type_info, "", "PressurePlate", "Target");
        }
        inline app::PressurePlate_Target__Enum* create() {
            return il2cpp::create_object<app::PressurePlate_Target__Enum>(get_class());
        }
    } // namespace PressurePlate_Target__Enum
} // namespace app::classes::types
