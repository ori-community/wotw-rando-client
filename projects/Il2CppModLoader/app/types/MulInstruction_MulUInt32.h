#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MulInstruction_MulUInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MulInstruction_MulUInt32__Class** type_info;
        inline app::MulInstruction_MulUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::MulInstruction_MulUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "MulInstruction", "MulUInt32");
        }
        inline app::MulInstruction_MulUInt32* create() {
            return il2cpp::create_object<app::MulInstruction_MulUInt32>(get_class());
        }
    } // namespace MulInstruction_MulUInt32
} // namespace app::classes::types
