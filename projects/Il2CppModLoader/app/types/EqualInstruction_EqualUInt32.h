#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualUInt32 {
        inline app::EqualInstruction_EqualUInt32__Class** type_info = (app::EqualInstruction_EqualUInt32__Class**)(modloader::win::memory::resolve_rva(0x04702C50));
        inline app::EqualInstruction_EqualUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualUInt32");
        }
        inline app::EqualInstruction_EqualUInt32* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualUInt32>(get_class());
        }
    } // namespace EqualInstruction_EqualUInt32
} // namespace app::classes::types
