#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LessThanInstruction_LessThanInt32__Class.h>
#include <Modloader/app/structs/LessThanInstruction_LessThanInt32.h>

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
