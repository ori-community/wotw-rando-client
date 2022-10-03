#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InitializeLocalInstruction_Reference {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InitializeLocalInstruction_Reference__Class** type_info;
        inline app::InitializeLocalInstruction_Reference__Class* get_class() {
            return il2cpp::get_nested_class<app::InitializeLocalInstruction_Reference__Class>(type_info, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction", "Reference");
        }
        inline app::InitializeLocalInstruction_Reference* create() {
            return il2cpp::create_object<app::InitializeLocalInstruction_Reference>(get_class());
        }
    } // namespace InitializeLocalInstruction_Reference
} // namespace app::classes::types
