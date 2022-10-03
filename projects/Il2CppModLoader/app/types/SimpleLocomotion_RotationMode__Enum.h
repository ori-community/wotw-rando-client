#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleLocomotion_RotationMode__Enum {
        namespace {
            app::SimpleLocomotion_RotationMode__Enum__Class* type_info_ref = nullptr;
        }
        app::SimpleLocomotion_RotationMode__Enum__Class** type_info = &type_info_ref;
        inline app::SimpleLocomotion_RotationMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleLocomotion_RotationMode__Enum__Class>(type_info, "RootMotion.Demos", "SimpleLocomotion", "RotationMode");
        }
        inline app::SimpleLocomotion_RotationMode__Enum* create() {
            return il2cpp::create_object<app::SimpleLocomotion_RotationMode__Enum>(get_class());
        }
    } // namespace SimpleLocomotion_RotationMode__Enum
} // namespace app::classes::types
