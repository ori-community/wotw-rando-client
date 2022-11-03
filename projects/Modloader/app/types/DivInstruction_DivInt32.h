#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DivInstruction_DivInt32 {
        inline app::DivInstruction_DivInt32__Class** type_info = (app::DivInstruction_DivInt32__Class**)(modloader::win::memory::resolve_rva(0x04762B58));
        inline app::DivInstruction_DivInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::DivInstruction_DivInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "DivInstruction", "DivInt32");
        }
        inline app::DivInstruction_DivInt32* create() {
            return il2cpp::create_object<app::DivInstruction_DivInt32>(get_class());
        }
    } // namespace DivInstruction_DivInt32
} // namespace app::classes::types
