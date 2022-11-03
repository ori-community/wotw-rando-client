#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GreaterThanInstruction_GreaterThanInt32 {
        inline app::GreaterThanInstruction_GreaterThanInt32__Class** type_info = (app::GreaterThanInstruction_GreaterThanInt32__Class**)(modloader::win::memory::resolve_rva(0x04751B28));
        inline app::GreaterThanInstruction_GreaterThanInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanInstruction_GreaterThanInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanInstruction", "GreaterThanInt32");
        }
        inline app::GreaterThanInstruction_GreaterThanInt32* create() {
            return il2cpp::create_object<app::GreaterThanInstruction_GreaterThanInt32>(get_class());
        }
    } // namespace GreaterThanInstruction_GreaterThanInt32
} // namespace app::classes::types
