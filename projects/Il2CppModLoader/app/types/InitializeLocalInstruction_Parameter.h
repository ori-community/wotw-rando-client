#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InitializeLocalInstruction_Parameter {
        inline app::InitializeLocalInstruction_Parameter__Class** type_info = (app::InitializeLocalInstruction_Parameter__Class**)(modloader::win::memory::resolve_rva(0x047897E0));
        inline app::InitializeLocalInstruction_Parameter__Class* get_class() {
            return il2cpp::get_nested_class<app::InitializeLocalInstruction_Parameter__Class>(type_info, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction", "Parameter");
        }
        inline app::InitializeLocalInstruction_Parameter* create() {
            return il2cpp::create_object<app::InitializeLocalInstruction_Parameter>(get_class());
        }
    } // namespace InitializeLocalInstruction_Parameter
} // namespace app::classes::types
