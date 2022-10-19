#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction_ExclusiveOrUInt16 {
        inline app::ExclusiveOrInstruction_ExclusiveOrUInt16__Class** type_info = (app::ExclusiveOrInstruction_ExclusiveOrUInt16__Class**)(modloader::win::memory::resolve_rva(0x0478EAF8));
        inline app::ExclusiveOrInstruction_ExclusiveOrUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::ExclusiveOrInstruction_ExclusiveOrUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction", "ExclusiveOrUInt16");
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrUInt16* create() {
            return il2cpp::create_object<app::ExclusiveOrInstruction_ExclusiveOrUInt16>(get_class());
        }
    } // namespace ExclusiveOrInstruction_ExclusiveOrUInt16
} // namespace app::classes::types
