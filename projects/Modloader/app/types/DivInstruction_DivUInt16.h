#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DivInstruction_DivUInt16__Class.h>
#include <Modloader/app/structs/DivInstruction_DivUInt16.h>

namespace app::classes::types {
    namespace DivInstruction_DivUInt16 {
        inline app::DivInstruction_DivUInt16__Class** type_info = (app::DivInstruction_DivUInt16__Class**)(modloader::win::memory::resolve_rva(0x0475EA78));
        inline app::DivInstruction_DivUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::DivInstruction_DivUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "DivInstruction", "DivUInt16");
        }
        inline app::DivInstruction_DivUInt16* create() {
            return il2cpp::create_object<app::DivInstruction_DivUInt16>(get_class());
        }
    } // namespace DivInstruction_DivUInt16
} // namespace app::classes::types
