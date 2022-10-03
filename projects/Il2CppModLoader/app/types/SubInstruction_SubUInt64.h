#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SubInstruction_SubUInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SubInstruction_SubUInt64__Class** type_info;
        inline app::SubInstruction_SubUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::SubInstruction_SubUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "SubInstruction", "SubUInt64");
        }
        inline app::SubInstruction_SubUInt64* create() {
            return il2cpp::create_object<app::SubInstruction_SubUInt64>(get_class());
        }
    } // namespace SubInstruction_SubUInt64
} // namespace app::classes::types
