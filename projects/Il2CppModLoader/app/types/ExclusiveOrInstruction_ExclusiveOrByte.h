#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExclusiveOrInstruction_ExclusiveOrByte {
        inline app::ExclusiveOrInstruction_ExclusiveOrByte__Class** type_info = (app::ExclusiveOrInstruction_ExclusiveOrByte__Class**)(modloader::win::memory::resolve_rva(0x04733DB8));
        inline app::ExclusiveOrInstruction_ExclusiveOrByte__Class* get_class() {
            return il2cpp::get_nested_class<app::ExclusiveOrInstruction_ExclusiveOrByte__Class>(type_info, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction", "ExclusiveOrByte");
        }
        inline app::ExclusiveOrInstruction_ExclusiveOrByte* create() {
            return il2cpp::create_object<app::ExclusiveOrInstruction_ExclusiveOrByte>(get_class());
        }
    } // namespace ExclusiveOrInstruction_ExclusiveOrByte
} // namespace app::classes::types
