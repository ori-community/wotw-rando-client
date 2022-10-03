#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MulOvfInstruction_MulOvfInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MulOvfInstruction_MulOvfInt32__Class** type_info;
        inline app::MulOvfInstruction_MulOvfInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::MulOvfInstruction_MulOvfInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "MulOvfInstruction", "MulOvfInt32");
        }
        inline app::MulOvfInstruction_MulOvfInt32* create() {
            return il2cpp::create_object<app::MulOvfInstruction_MulOvfInt32>(get_class());
        }
    } // namespace MulOvfInstruction_MulOvfInt32
} // namespace app::classes::types
