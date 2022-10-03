#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NumericConvertInstruction_ToUnderlying {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NumericConvertInstruction_ToUnderlying__Class** type_info;
        inline app::NumericConvertInstruction_ToUnderlying__Class* get_class() {
            return il2cpp::get_nested_class<app::NumericConvertInstruction_ToUnderlying__Class>(type_info, "System.Linq.Expressions.Interpreter", "NumericConvertInstruction", "ToUnderlying");
        }
        inline app::NumericConvertInstruction_ToUnderlying* create() {
            return il2cpp::create_object<app::NumericConvertInstruction_ToUnderlying>(get_class());
        }
    } // namespace NumericConvertInstruction_ToUnderlying
} // namespace app::classes::types
