#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GreaterThanInstruction_GreaterThanByte {
        inline app::GreaterThanInstruction_GreaterThanByte__Class** type_info = (app::GreaterThanInstruction_GreaterThanByte__Class**)(modloader::win::memory::resolve_rva(0x04761388));
        inline app::GreaterThanInstruction_GreaterThanByte__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanInstruction_GreaterThanByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanInstruction", "GreaterThanByte");
        }
        inline app::GreaterThanInstruction_GreaterThanByte* create() {
            return il2cpp::create_object<app::GreaterThanInstruction_GreaterThanByte>(get_class());
        }
    } // namespace GreaterThanInstruction_GreaterThanByte
} // namespace app::classes::types
