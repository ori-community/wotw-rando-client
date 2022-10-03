#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StackFrame {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StackFrame__Class** type_info;
        inline app::StackFrame__Class* get_class() {
            return il2cpp::get_class<app::StackFrame__Class>(type_info, "System.Diagnostics", "StackFrame");
        }
        inline app::StackFrame* create() {
            return il2cpp::create_object<app::StackFrame>(get_class());
        }
        inline app::StackFrame__Array* create_array(int size) {
            return il2cpp::array_new<app::StackFrame__Array>(get_class(), size);
        }
    } // namespace StackFrame
} // namespace app::classes::types
