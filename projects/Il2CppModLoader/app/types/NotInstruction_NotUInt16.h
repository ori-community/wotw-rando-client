#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotInstruction_NotUInt16 {
        inline app::NotInstruction_NotUInt16__Class** type_info = (app::NotInstruction_NotUInt16__Class**)(modloader::win::memory::resolve_rva(0x04780E90));
        inline app::NotInstruction_NotUInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::NotInstruction_NotUInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotInstruction", "NotUInt16");
        }
        inline app::NotInstruction_NotUInt16* create() {
            return il2cpp::create_object<app::NotInstruction_NotUInt16>(get_class());
        }
    } // namespace NotInstruction_NotUInt16
} // namespace app::classes::types
