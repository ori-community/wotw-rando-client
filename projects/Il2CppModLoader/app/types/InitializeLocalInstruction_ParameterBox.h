#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InitializeLocalInstruction_ParameterBox {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InitializeLocalInstruction_ParameterBox__Class** type_info;
        inline app::InitializeLocalInstruction_ParameterBox__Class* get_class() {
            return il2cpp::get_nested_class<app::InitializeLocalInstruction_ParameterBox__Class>(type_info, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction", "ParameterBox");
        }
        inline app::InitializeLocalInstruction_ParameterBox* create() {
            return il2cpp::create_object<app::InitializeLocalInstruction_ParameterBox>(get_class());
        }
    } // namespace InitializeLocalInstruction_ParameterBox
} // namespace app::classes::types
