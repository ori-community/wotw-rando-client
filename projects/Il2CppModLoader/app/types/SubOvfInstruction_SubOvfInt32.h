#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SubOvfInstruction_SubOvfInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SubOvfInstruction_SubOvfInt32__Class** type_info;
        inline app::SubOvfInstruction_SubOvfInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::SubOvfInstruction_SubOvfInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "SubOvfInstruction", "SubOvfInt32");
        }
        inline app::SubOvfInstruction_SubOvfInt32* create() {
            return il2cpp::create_object<app::SubOvfInstruction_SubOvfInt32>(get_class());
        }
    } // namespace SubOvfInstruction_SubOvfInt32
} // namespace app::classes::types
