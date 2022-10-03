#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NumericConvertInstruction_Unchecked {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NumericConvertInstruction_Unchecked__Class** type_info;
        inline app::NumericConvertInstruction_Unchecked__Class* get_class() {
            return il2cpp::get_nested_class<app::NumericConvertInstruction_Unchecked__Class>(type_info, "System.Linq.Expressions.Interpreter", "NumericConvertInstruction", "Unchecked");
        }
        inline app::NumericConvertInstruction_Unchecked* create() {
            return il2cpp::create_object<app::NumericConvertInstruction_Unchecked>(get_class());
        }
    } // namespace NumericConvertInstruction_Unchecked
} // namespace app::classes::types
