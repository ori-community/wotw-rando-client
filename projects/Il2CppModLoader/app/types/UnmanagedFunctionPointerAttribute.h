#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnmanagedFunctionPointerAttribute {
        namespace {
            app::UnmanagedFunctionPointerAttribute__Class* type_info_ref = nullptr;
        }
        app::UnmanagedFunctionPointerAttribute__Class** type_info = &type_info_ref;
        inline app::UnmanagedFunctionPointerAttribute__Class* get_class() {
            return il2cpp::get_class<app::UnmanagedFunctionPointerAttribute__Class>(type_info, "System.Runtime.InteropServices", "UnmanagedFunctionPointerAttribute");
        }
        inline app::UnmanagedFunctionPointerAttribute* create() {
            return il2cpp::create_object<app::UnmanagedFunctionPointerAttribute>(get_class());
        }
    } // namespace UnmanagedFunctionPointerAttribute
} // namespace app::classes::types
