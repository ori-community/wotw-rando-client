#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NegateInstruction_NegateInt64 {
        inline app::NegateInstruction_NegateInt64__Class** type_info = (app::NegateInstruction_NegateInt64__Class**)(modloader::win::memory::resolve_rva(0x0477CA88));
        inline app::NegateInstruction_NegateInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::NegateInstruction_NegateInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "NegateInstruction", "NegateInt64");
        }
        inline app::NegateInstruction_NegateInt64* create() {
            return il2cpp::create_object<app::NegateInstruction_NegateInt64>(get_class());
        }
    } // namespace NegateInstruction_NegateInt64
} // namespace app::classes::types
