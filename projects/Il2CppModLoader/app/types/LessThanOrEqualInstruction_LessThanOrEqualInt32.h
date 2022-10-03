#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction_LessThanOrEqualInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LessThanOrEqualInstruction_LessThanOrEqualInt32__Class** type_info;
        inline app::LessThanOrEqualInstruction_LessThanOrEqualInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanOrEqualInstruction_LessThanOrEqualInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction", "LessThanOrEqualInt32");
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualInt32* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction_LessThanOrEqualInt32>(get_class());
        }
    } // namespace LessThanOrEqualInstruction_LessThanOrEqualInt32
} // namespace app::classes::types
