#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StackFrame {
        inline app::StackFrame__Class** type_info = (app::StackFrame__Class**)(modloader::win::memory::resolve_rva(0x0473F360));
        inline app::StackFrame__Class* get_class() {
            return il2cpp::get_class<app::StackFrame__Class>(type_info, "System.Diagnostics", "StackFrame");
        }
        inline app::StackFrame* create() {
            return il2cpp::create_object<app::StackFrame>(get_class());
        }
        inline app::StackFrame__Array* create_array(int size) {
            return il2cpp::array_new<app::StackFrame__Array>(get_class(), size);
        }
        inline app::StackFrame__Array* create_array(const std::vector<app::StackFrame*>& items) {
            return il2cpp::array_new<app::StackFrame__Array>(get_class(), items);
        }
    } // namespace StackFrame
} // namespace app::classes::types
