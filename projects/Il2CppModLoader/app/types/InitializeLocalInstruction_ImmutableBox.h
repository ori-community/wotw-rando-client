#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InitializeLocalInstruction_ImmutableBox {
        inline app::InitializeLocalInstruction_ImmutableBox__Class** type_info = (app::InitializeLocalInstruction_ImmutableBox__Class**)(modloader::win::memory::resolve_rva(0x04726910));
        inline app::InitializeLocalInstruction_ImmutableBox__Class* get_class() {
            return il2cpp::get_nested_class<app::InitializeLocalInstruction_ImmutableBox__Class>(type_info, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction", "ImmutableBox");
        }
        inline app::InitializeLocalInstruction_ImmutableBox* create() {
            return il2cpp::create_object<app::InitializeLocalInstruction_ImmutableBox>(get_class());
        }
    } // namespace InitializeLocalInstruction_ImmutableBox
} // namespace app::classes::types
