#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InitializeLocalInstruction_MutableValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InitializeLocalInstruction_MutableValue__Class** type_info;
        inline app::InitializeLocalInstruction_MutableValue__Class* get_class() {
            return il2cpp::get_nested_class<app::InitializeLocalInstruction_MutableValue__Class>(type_info, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction", "MutableValue");
        }
        inline app::InitializeLocalInstruction_MutableValue* create() {
            return il2cpp::create_object<app::InitializeLocalInstruction_MutableValue>(get_class());
        }
    } // namespace InitializeLocalInstruction_MutableValue
} // namespace app::classes::types
