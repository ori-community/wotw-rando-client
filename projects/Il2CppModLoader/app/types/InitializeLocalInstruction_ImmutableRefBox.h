#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InitializeLocalInstruction_ImmutableRefBox {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InitializeLocalInstruction_ImmutableRefBox__Class** type_info;
        inline app::InitializeLocalInstruction_ImmutableRefBox__Class* get_class() {
            return il2cpp::get_nested_class<app::InitializeLocalInstruction_ImmutableRefBox__Class>(type_info, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction", "ImmutableRefBox");
        }
        inline app::InitializeLocalInstruction_ImmutableRefBox* create() {
            return il2cpp::create_object<app::InitializeLocalInstruction_ImmutableRefBox>(get_class());
        }
    } // namespace InitializeLocalInstruction_ImmutableRefBox
} // namespace app::classes::types
