#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualSingle {
        inline app::NotEqualInstruction_NotEqualSingle__Class** type_info = (app::NotEqualInstruction_NotEqualSingle__Class**)(modloader::win::memory::resolve_rva(0x0478DFB0));
        inline app::NotEqualInstruction_NotEqualSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualSingle__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualSingle");
        }
        inline app::NotEqualInstruction_NotEqualSingle* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualSingle>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualSingle
} // namespace app::classes::types
