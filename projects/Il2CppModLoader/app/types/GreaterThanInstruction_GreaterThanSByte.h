#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GreaterThanInstruction_GreaterThanSByte {
        inline app::GreaterThanInstruction_GreaterThanSByte__Class** type_info = (app::GreaterThanInstruction_GreaterThanSByte__Class**)(modloader::win::memory::resolve_rva(0x04725E80));
        inline app::GreaterThanInstruction_GreaterThanSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanInstruction_GreaterThanSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanInstruction", "GreaterThanSByte");
        }
        inline app::GreaterThanInstruction_GreaterThanSByte* create() {
            return il2cpp::create_object<app::GreaterThanInstruction_GreaterThanSByte>(get_class());
        }
    } // namespace GreaterThanInstruction_GreaterThanSByte
} // namespace app::classes::types
