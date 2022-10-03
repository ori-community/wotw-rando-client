#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SubInstruction_SubDouble {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SubInstruction_SubDouble__Class** type_info;
        inline app::SubInstruction_SubDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::SubInstruction_SubDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "SubInstruction", "SubDouble");
        }
        inline app::SubInstruction_SubDouble* create() {
            return il2cpp::create_object<app::SubInstruction_SubDouble>(get_class());
        }
    } // namespace SubInstruction_SubDouble
} // namespace app::classes::types
