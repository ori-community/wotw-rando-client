#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualInt32 {
        inline app::NotEqualInstruction_NotEqualInt32__Class** type_info = (app::NotEqualInstruction_NotEqualInt32__Class**)(modloader::win::memory::resolve_rva(0x0474D580));
        inline app::NotEqualInstruction_NotEqualInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualInt32");
        }
        inline app::NotEqualInstruction_NotEqualInt32* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualInt32>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualInt32
} // namespace app::classes::types
