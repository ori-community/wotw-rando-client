#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DivInstruction_DivDouble {
        inline app::DivInstruction_DivDouble__Class** type_info = (app::DivInstruction_DivDouble__Class**)(modloader::win::memory::resolve_rva(0x04736DA8));
        inline app::DivInstruction_DivDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::DivInstruction_DivDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "DivInstruction", "DivDouble");
        }
        inline app::DivInstruction_DivDouble* create() {
            return il2cpp::create_object<app::DivInstruction_DivDouble>(get_class());
        }
    } // namespace DivInstruction_DivDouble
} // namespace app::classes::types
