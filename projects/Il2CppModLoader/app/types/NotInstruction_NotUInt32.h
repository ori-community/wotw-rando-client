#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotInstruction_NotUInt32 {
        inline app::NotInstruction_NotUInt32__Class** type_info = (app::NotInstruction_NotUInt32__Class**)(modloader::win::memory::resolve_rva(0x0474D990));
        inline app::NotInstruction_NotUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::NotInstruction_NotUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotInstruction", "NotUInt32");
        }
        inline app::NotInstruction_NotUInt32* create() {
            return il2cpp::create_object<app::NotInstruction_NotUInt32>(get_class());
        }
    } // namespace NotInstruction_NotUInt32
} // namespace app::classes::types
