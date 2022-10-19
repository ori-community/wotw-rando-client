#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OrInstruction_OrSByte {
        inline app::OrInstruction_OrSByte__Class** type_info = (app::OrInstruction_OrSByte__Class**)(modloader::win::memory::resolve_rva(0x04782FE0));
        inline app::OrInstruction_OrSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::OrInstruction_OrSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "OrInstruction", "OrSByte");
        }
        inline app::OrInstruction_OrSByte* create() {
            return il2cpp::create_object<app::OrInstruction_OrSByte>(get_class());
        }
    } // namespace OrInstruction_OrSByte
} // namespace app::classes::types
