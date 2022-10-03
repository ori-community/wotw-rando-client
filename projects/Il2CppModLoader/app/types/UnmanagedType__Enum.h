#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnmanagedType__Enum {
        namespace {
            app::UnmanagedType__Enum__Class* type_info_ref = nullptr;
        }
        app::UnmanagedType__Enum__Class** type_info = &type_info_ref;
        inline app::UnmanagedType__Enum__Class* get_class() {
            return il2cpp::get_class<app::UnmanagedType__Enum__Class>(type_info, "System.Runtime.InteropServices", "UnmanagedType");
        }
        inline app::UnmanagedType__Enum* create() {
            return il2cpp::create_object<app::UnmanagedType__Enum>(get_class());
        }
    } // namespace UnmanagedType__Enum
} // namespace app::classes::types
