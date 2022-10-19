#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction_LessThanOrEqualByte {
        inline app::LessThanOrEqualInstruction_LessThanOrEqualByte__Class** type_info = (app::LessThanOrEqualInstruction_LessThanOrEqualByte__Class**)(modloader::win::memory::resolve_rva(0x0478D928));
        inline app::LessThanOrEqualInstruction_LessThanOrEqualByte__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanOrEqualInstruction_LessThanOrEqualByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction", "LessThanOrEqualByte");
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualByte* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction_LessThanOrEqualByte>(get_class());
        }
    } // namespace LessThanOrEqualInstruction_LessThanOrEqualByte
} // namespace app::classes::types
