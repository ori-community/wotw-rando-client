#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualChar {
        inline app::EqualInstruction_EqualChar__Class** type_info = (app::EqualInstruction_EqualChar__Class**)(modloader::win::memory::resolve_rva(0x0474B940));
        inline app::EqualInstruction_EqualChar__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualChar__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualChar");
        }
        inline app::EqualInstruction_EqualChar* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualChar>(get_class());
        }
    } // namespace EqualInstruction_EqualChar
} // namespace app::classes::types
