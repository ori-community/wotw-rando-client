#pragma once
#include <Modloader/app/structs/StackFrame__Array.h>
#include <Modloader/app/structs/StackFrame__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StackFrame__Array {
        inline app::StackFrame__Array__Class** type_info() {
            static app::StackFrame__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StackFrame__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StackFrame__Array__Class* get_class() {
            return il2cpp::get_class<app::StackFrame__Array__Class>(type_info(), "System.Diagnostics", "StackFrame[]");
        }
        inline app::StackFrame__Array* create() {
            return il2cpp::create_object<app::StackFrame__Array>(get_class());
        }
    } // namespace StackFrame__Array
} // namespace app::classes::types
