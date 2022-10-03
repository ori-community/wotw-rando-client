#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StackFrame__Array {
        namespace {
            app::StackFrame__Array__Class* type_info_ref = nullptr;
        }
        app::StackFrame__Array__Class** type_info = &type_info_ref;
        inline app::StackFrame__Array__Class* get_class() {
            return il2cpp::get_class<app::StackFrame__Array__Class>(type_info, "System.Diagnostics", "StackFrame[]");
        }
        inline app::StackFrame__Array* create() {
            return il2cpp::create_object<app::StackFrame__Array>(get_class());
        }
    } // namespace StackFrame__Array
} // namespace app::classes::types
