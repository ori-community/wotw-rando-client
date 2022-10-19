#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
