#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OrInstruction_OrSByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OrInstruction_OrSByte__Class** type_info;
        inline app::OrInstruction_OrSByte__Class* get_class() {
            return il2cpp::get_nested_class<app::OrInstruction_OrSByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "OrInstruction", "OrSByte");
        }
        inline app::OrInstruction_OrSByte* create() {
            return il2cpp::create_object<app::OrInstruction_OrSByte>(get_class());
        }
    } // namespace OrInstruction_OrSByte
} // namespace app::classes::types
