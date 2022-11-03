#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LessThanInstruction_LessThanChar {
        inline app::LessThanInstruction_LessThanChar__Class** type_info = (app::LessThanInstruction_LessThanChar__Class**)(modloader::win::memory::resolve_rva(0x0472D338));
        inline app::LessThanInstruction_LessThanChar__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanInstruction_LessThanChar__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanInstruction", "LessThanChar");
        }
        inline app::LessThanInstruction_LessThanChar* create() {
            return il2cpp::create_object<app::LessThanInstruction_LessThanChar>(get_class());
        }
    } // namespace LessThanInstruction_LessThanChar
} // namespace app::classes::types
