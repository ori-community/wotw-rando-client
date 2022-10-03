#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InitializeLocalInstruction_MutableBox {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InitializeLocalInstruction_MutableBox__Class** type_info;
        inline app::InitializeLocalInstruction_MutableBox__Class* get_class() {
            return il2cpp::get_nested_class<app::InitializeLocalInstruction_MutableBox__Class>(type_info, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction", "MutableBox");
        }
        inline app::InitializeLocalInstruction_MutableBox* create() {
            return il2cpp::create_object<app::InitializeLocalInstruction_MutableBox>(get_class());
        }
    } // namespace InitializeLocalInstruction_MutableBox
} // namespace app::classes::types
