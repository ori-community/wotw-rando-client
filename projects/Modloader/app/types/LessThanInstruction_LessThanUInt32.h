#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LessThanInstruction_LessThanUInt32 {
        inline app::LessThanInstruction_LessThanUInt32__Class** type_info = (app::LessThanInstruction_LessThanUInt32__Class**)(modloader::win::memory::resolve_rva(0x04778900));
        inline app::LessThanInstruction_LessThanUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanInstruction_LessThanUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanInstruction", "LessThanUInt32");
        }
        inline app::LessThanInstruction_LessThanUInt32* create() {
            return il2cpp::create_object<app::LessThanInstruction_LessThanUInt32>(get_class());
        }
    } // namespace LessThanInstruction_LessThanUInt32
} // namespace app::classes::types
