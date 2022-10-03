#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OrInstruction_OrByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OrInstruction_OrByte__Class** type_info;
        inline app::OrInstruction_OrByte__Class* get_class() {
            return il2cpp::get_nested_class<app::OrInstruction_OrByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "OrInstruction", "OrByte");
        }
        inline app::OrInstruction_OrByte* create() {
            return il2cpp::create_object<app::OrInstruction_OrByte>(get_class());
        }
    } // namespace OrInstruction_OrByte
} // namespace app::classes::types
