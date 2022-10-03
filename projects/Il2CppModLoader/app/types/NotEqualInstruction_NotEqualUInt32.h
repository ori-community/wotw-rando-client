#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualUInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotEqualInstruction_NotEqualUInt32__Class** type_info;
        inline app::NotEqualInstruction_NotEqualUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualUInt32");
        }
        inline app::NotEqualInstruction_NotEqualUInt32* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualUInt32>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualUInt32
} // namespace app::classes::types
