#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NotInstruction_NotSByte__Class.h>
#include <Modloader/app/structs/NotInstruction_NotSByte.h>

namespace app::classes::types {
    namespace NotInstruction_NotSByte {
        inline app::NotInstruction_NotSByte__Class** type_info = (app::NotInstruction_NotSByte__Class**)(modloader::win::memory::resolve_rva(0x04745BB8));
        inline app::NotInstruction_NotSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::NotInstruction_NotSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotInstruction", "NotSByte");
        }
        inline app::NotInstruction_NotSByte* create() {
            return il2cpp::create_object<app::NotInstruction_NotSByte>(get_class());
        }
    } // namespace NotInstruction_NotSByte
} // namespace app::classes::types
