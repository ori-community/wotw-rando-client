#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SubInstruction_SubUInt64__Class.h>
#include <Modloader/app/structs/SubInstruction_SubUInt64.h>

namespace app::classes::types {
    namespace SubInstruction_SubUInt64 {
        inline app::SubInstruction_SubUInt64__Class** type_info = (app::SubInstruction_SubUInt64__Class**)(modloader::win::memory::resolve_rva(0x0472F848));
        inline app::SubInstruction_SubUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::SubInstruction_SubUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "SubInstruction", "SubUInt64");
        }
        inline app::SubInstruction_SubUInt64* create() {
            return il2cpp::create_object<app::SubInstruction_SubUInt64>(get_class());
        }
    } // namespace SubInstruction_SubUInt64
} // namespace app::classes::types
