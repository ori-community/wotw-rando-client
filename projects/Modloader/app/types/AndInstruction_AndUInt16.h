#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AndInstruction_AndUInt16__Class.h>
#include <Modloader/app/structs/AndInstruction_AndUInt16.h>

namespace app::classes::types {
    namespace AndInstruction_AndUInt16 {
        inline app::AndInstruction_AndUInt16__Class** type_info = (app::AndInstruction_AndUInt16__Class**)(modloader::win::memory::resolve_rva(0x0475DE00));
        inline app::AndInstruction_AndUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::AndInstruction_AndUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "AndInstruction", "AndUInt16");
        }
        inline app::AndInstruction_AndUInt16* create() {
            return il2cpp::create_object<app::AndInstruction_AndUInt16>(get_class());
        }
    } // namespace AndInstruction_AndUInt16
} // namespace app::classes::types
