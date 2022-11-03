#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinStatusAnimatorDriver_SeinStatus__Enum {
        namespace {
            inline app::SeinStatusAnimatorDriver_SeinStatus__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinStatusAnimatorDriver_SeinStatus__Enum__Class** type_info = &type_info_ref;
        inline app::SeinStatusAnimatorDriver_SeinStatus__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinStatusAnimatorDriver_SeinStatus__Enum__Class>(type_info, "", "SeinStatusAnimatorDriver", "SeinStatus");
        }
        inline app::SeinStatusAnimatorDriver_SeinStatus__Enum* create() {
            return il2cpp::create_object<app::SeinStatusAnimatorDriver_SeinStatus__Enum>(get_class());
        }
    } // namespace SeinStatusAnimatorDriver_SeinStatus__Enum
} // namespace app::classes::types
