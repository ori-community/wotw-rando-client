#pragma once
#include <Modloader/app/structs/SeinStatusAnimatorDriver_SeinStatus__Enum.h>
#include <Modloader/app/structs/SeinStatusAnimatorDriver_SeinStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinStatusAnimatorDriver_SeinStatus__Enum {
        inline app::SeinStatusAnimatorDriver_SeinStatus__Enum__Class** type_info() {
            static app::SeinStatusAnimatorDriver_SeinStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinStatusAnimatorDriver_SeinStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinStatusAnimatorDriver_SeinStatus__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinStatusAnimatorDriver_SeinStatus__Enum__Class>(type_info(), "", "SeinStatusAnimatorDriver", "SeinStatus");
        }
        inline app::SeinStatusAnimatorDriver_SeinStatus__Enum* create() {
            return il2cpp::create_object<app::SeinStatusAnimatorDriver_SeinStatus__Enum>(get_class());
        }
    } // namespace SeinStatusAnimatorDriver_SeinStatus__Enum
} // namespace app::classes::types
