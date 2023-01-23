#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DivInstruction_DivUInt32__Class.h>
#include <Modloader/app/structs/DivInstruction_DivUInt32.h>

namespace app::classes::types {
    namespace DivInstruction_DivUInt32 {
        inline app::DivInstruction_DivUInt32__Class** type_info = (app::DivInstruction_DivUInt32__Class**)(modloader::win::memory::resolve_rva(0x0478C558));
        inline app::DivInstruction_DivUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::DivInstruction_DivUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "DivInstruction", "DivUInt32");
        }
        inline app::DivInstruction_DivUInt32* create() {
            return il2cpp::create_object<app::DivInstruction_DivUInt32>(get_class());
        }
    } // namespace DivInstruction_DivUInt32
} // namespace app::classes::types
