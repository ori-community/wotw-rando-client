#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NotInstruction_NotByte__Class.h>
#include <Modloader/app/structs/NotInstruction_NotByte.h>

namespace app::classes::types {
    namespace NotInstruction_NotByte {
        inline app::NotInstruction_NotByte__Class** type_info = (app::NotInstruction_NotByte__Class**)(modloader::win::memory::resolve_rva(0x04742E30));
        inline app::NotInstruction_NotByte__Class* get_class() {
            return il2cpp::get_nested_class<app::NotInstruction_NotByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotInstruction", "NotByte");
        }
        inline app::NotInstruction_NotByte* create() {
            return il2cpp::create_object<app::NotInstruction_NotByte>(get_class());
        }
    } // namespace NotInstruction_NotByte
} // namespace app::classes::types
