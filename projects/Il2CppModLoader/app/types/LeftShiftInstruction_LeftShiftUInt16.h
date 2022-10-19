#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeftShiftInstruction_LeftShiftUInt16 {
        inline app::LeftShiftInstruction_LeftShiftUInt16__Class** type_info = (app::LeftShiftInstruction_LeftShiftUInt16__Class**)(modloader::win::memory::resolve_rva(0x0470DE70));
        inline app::LeftShiftInstruction_LeftShiftUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::LeftShiftInstruction_LeftShiftUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeftShiftInstruction", "LeftShiftUInt16");
        }
        inline app::LeftShiftInstruction_LeftShiftUInt16* create() {
            return il2cpp::create_object<app::LeftShiftInstruction_LeftShiftUInt16>(get_class());
        }
    } // namespace LeftShiftInstruction_LeftShiftUInt16
} // namespace app::classes::types
