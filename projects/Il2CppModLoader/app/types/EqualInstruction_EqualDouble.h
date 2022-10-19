#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualDouble {
        inline app::EqualInstruction_EqualDouble__Class** type_info = (app::EqualInstruction_EqualDouble__Class**)(modloader::win::memory::resolve_rva(0x04770BC0));
        inline app::EqualInstruction_EqualDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualDouble");
        }
        inline app::EqualInstruction_EqualDouble* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualDouble>(get_class());
        }
    } // namespace EqualInstruction_EqualDouble
} // namespace app::classes::types
