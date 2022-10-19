#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction_LessThanOrEqualChar {
        inline app::LessThanOrEqualInstruction_LessThanOrEqualChar__Class** type_info = (app::LessThanOrEqualInstruction_LessThanOrEqualChar__Class**)(modloader::win::memory::resolve_rva(0x04797E80));
        inline app::LessThanOrEqualInstruction_LessThanOrEqualChar__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanOrEqualInstruction_LessThanOrEqualChar__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction", "LessThanOrEqualChar");
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualChar* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction_LessThanOrEqualChar>(get_class());
        }
    } // namespace LessThanOrEqualInstruction_LessThanOrEqualChar
} // namespace app::classes::types
