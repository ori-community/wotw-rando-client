#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SubInstruction_SubUInt32__Class.h>
#include <Modloader/app/structs/SubInstruction_SubUInt32.h>

namespace app::classes::types {
    namespace SubInstruction_SubUInt32 {
        inline app::SubInstruction_SubUInt32__Class** type_info = (app::SubInstruction_SubUInt32__Class**)(modloader::win::memory::resolve_rva(0x04739AC0));
        inline app::SubInstruction_SubUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::SubInstruction_SubUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "SubInstruction", "SubUInt32");
        }
        inline app::SubInstruction_SubUInt32* create() {
            return il2cpp::create_object<app::SubInstruction_SubUInt32>(get_class());
        }
    } // namespace SubInstruction_SubUInt32
} // namespace app::classes::types
