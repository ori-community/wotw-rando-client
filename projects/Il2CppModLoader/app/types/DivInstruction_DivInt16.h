#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DivInstruction_DivInt16 {
        inline app::DivInstruction_DivInt16__Class** type_info = (app::DivInstruction_DivInt16__Class**)(modloader::win::memory::resolve_rva(0x0472D158));
        inline app::DivInstruction_DivInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::DivInstruction_DivInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "DivInstruction", "DivInt16");
        }
        inline app::DivInstruction_DivInt16* create() {
            return il2cpp::create_object<app::DivInstruction_DivInt16>(get_class());
        }
    } // namespace DivInstruction_DivInt16
} // namespace app::classes::types
