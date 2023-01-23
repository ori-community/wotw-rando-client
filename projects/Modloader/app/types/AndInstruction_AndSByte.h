#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AndInstruction_AndSByte__Class.h>
#include <Modloader/app/structs/AndInstruction_AndSByte.h>

namespace app::classes::types {
    namespace AndInstruction_AndSByte {
        inline app::AndInstruction_AndSByte__Class** type_info = (app::AndInstruction_AndSByte__Class**)(modloader::win::memory::resolve_rva(0x04793138));
        inline app::AndInstruction_AndSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::AndInstruction_AndSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "AndInstruction", "AndSByte");
        }
        inline app::AndInstruction_AndSByte* create() {
            return il2cpp::create_object<app::AndInstruction_AndSByte>(get_class());
        }
    } // namespace AndInstruction_AndSByte
} // namespace app::classes::types
