#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualDouble {
        inline app::NotEqualInstruction_NotEqualDouble__Class** type_info = (app::NotEqualInstruction_NotEqualDouble__Class**)(modloader::win::memory::resolve_rva(0x04756D58));
        inline app::NotEqualInstruction_NotEqualDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualDouble");
        }
        inline app::NotEqualInstruction_NotEqualDouble* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualDouble>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualDouble
} // namespace app::classes::types
