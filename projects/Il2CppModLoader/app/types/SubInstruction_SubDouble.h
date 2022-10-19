#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SubInstruction_SubDouble {
        inline app::SubInstruction_SubDouble__Class** type_info = (app::SubInstruction_SubDouble__Class**)(modloader::win::memory::resolve_rva(0x0476D858));
        inline app::SubInstruction_SubDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::SubInstruction_SubDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "SubInstruction", "SubDouble");
        }
        inline app::SubInstruction_SubDouble* create() {
            return il2cpp::create_object<app::SubInstruction_SubDouble>(get_class());
        }
    } // namespace SubInstruction_SubDouble
} // namespace app::classes::types
