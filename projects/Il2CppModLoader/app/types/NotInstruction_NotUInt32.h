#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotInstruction_NotUInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotInstruction_NotUInt32__Class** type_info;
        inline app::NotInstruction_NotUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::NotInstruction_NotUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotInstruction", "NotUInt32");
        }
        inline app::NotInstruction_NotUInt32* create() {
            return il2cpp::create_object<app::NotInstruction_NotUInt32>(get_class());
        }
    } // namespace NotInstruction_NotUInt32
} // namespace app::classes::types
