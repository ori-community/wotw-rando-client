#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LessThanInstruction_LessThanUInt64 {
        inline app::LessThanInstruction_LessThanUInt64__Class** type_info = (app::LessThanInstruction_LessThanUInt64__Class**)(modloader::win::memory::resolve_rva(0x0477E950));
        inline app::LessThanInstruction_LessThanUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanInstruction_LessThanUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanInstruction", "LessThanUInt64");
        }
        inline app::LessThanInstruction_LessThanUInt64* create() {
            return il2cpp::create_object<app::LessThanInstruction_LessThanUInt64>(get_class());
        }
    } // namespace LessThanInstruction_LessThanUInt64
} // namespace app::classes::types
