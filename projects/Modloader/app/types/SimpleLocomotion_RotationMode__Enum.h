#pragma once
#include <Modloader/app/structs/SimpleLocomotion_RotationMode__Enum.h>
#include <Modloader/app/structs/SimpleLocomotion_RotationMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleLocomotion_RotationMode__Enum {
        inline app::SimpleLocomotion_RotationMode__Enum__Class** type_info() {
            static app::SimpleLocomotion_RotationMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleLocomotion_RotationMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleLocomotion_RotationMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleLocomotion_RotationMode__Enum__Class>(type_info(), "RootMotion.Demos", "SimpleLocomotion", "RotationMode");
        }
        inline app::SimpleLocomotion_RotationMode__Enum* create() {
            return il2cpp::create_object<app::SimpleLocomotion_RotationMode__Enum>(get_class());
        }
    } // namespace SimpleLocomotion_RotationMode__Enum
} // namespace app::classes::types
