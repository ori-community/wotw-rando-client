#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction_ExclusiveOrByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExclusiveOrInstruction_ExclusiveOrByte__Class** type_info;
        inline app::ExclusiveOrInstruction_ExclusiveOrByte__Class* get_class() {
            return il2cpp::get_nested_class<app::ExclusiveOrInstruction_ExclusiveOrByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction", "ExclusiveOrByte");
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrByte* create() {
            return il2cpp::create_object<app::ExclusiveOrInstruction_ExclusiveOrByte>(get_class());
        }
    } // namespace ExclusiveOrInstruction_ExclusiveOrByte
} // namespace app::classes::types
