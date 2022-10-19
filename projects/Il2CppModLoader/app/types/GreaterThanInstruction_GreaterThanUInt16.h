#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GreaterThanInstruction_GreaterThanUInt16 {
        inline app::GreaterThanInstruction_GreaterThanUInt16__Class** type_info = (app::GreaterThanInstruction_GreaterThanUInt16__Class**)(modloader::win::memory::resolve_rva(0x04771BC0));
        inline app::GreaterThanInstruction_GreaterThanUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::GreaterThanInstruction_GreaterThanUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "GreaterThanInstruction", "GreaterThanUInt16");
        }
        inline app::GreaterThanInstruction_GreaterThanUInt16* create() {
            return il2cpp::create_object<app::GreaterThanInstruction_GreaterThanUInt16>(get_class());
        }
    } // namespace GreaterThanInstruction_GreaterThanUInt16
} // namespace app::classes::types
