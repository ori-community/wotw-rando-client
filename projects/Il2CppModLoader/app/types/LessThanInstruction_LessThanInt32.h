#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LessThanInstruction_LessThanInt32 {
        inline app::LessThanInstruction_LessThanInt32__Class** type_info = (app::LessThanInstruction_LessThanInt32__Class**)(modloader::win::memory::resolve_rva(0x04758958));
        inline app::LessThanInstruction_LessThanInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanInstruction_LessThanInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanInstruction", "LessThanInt32");
        }
        inline app::LessThanInstruction_LessThanInt32* create() {
            return il2cpp::create_object<app::LessThanInstruction_LessThanInt32>(get_class());
        }
    } // namespace LessThanInstruction_LessThanInt32
} // namespace app::classes::types
