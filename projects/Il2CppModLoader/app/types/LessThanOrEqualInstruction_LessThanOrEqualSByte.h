#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction_LessThanOrEqualSByte {
        inline app::LessThanOrEqualInstruction_LessThanOrEqualSByte__Class** type_info = (app::LessThanOrEqualInstruction_LessThanOrEqualSByte__Class**)(modloader::win::memory::resolve_rva(0x047546F0));
        inline app::LessThanOrEqualInstruction_LessThanOrEqualSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanOrEqualInstruction_LessThanOrEqualSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction", "LessThanOrEqualSByte");
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualSByte* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction_LessThanOrEqualSByte>(get_class());
        }
    } // namespace LessThanOrEqualInstruction_LessThanOrEqualSByte
} // namespace app::classes::types
