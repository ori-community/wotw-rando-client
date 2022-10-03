#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NumericConvertInstruction_Checked {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NumericConvertInstruction_Checked__Class** type_info;
        inline app::NumericConvertInstruction_Checked__Class* get_class() {
            return il2cpp::get_nested_class<app::NumericConvertInstruction_Checked__Class>(type_info, "System.Linq.Expressions.Interpreter", "NumericConvertInstruction", "Checked");
        }
        inline app::NumericConvertInstruction_Checked* create() {
            return il2cpp::create_object<app::NumericConvertInstruction_Checked>(get_class());
        }
    } // namespace NumericConvertInstruction_Checked
} // namespace app::classes::types
