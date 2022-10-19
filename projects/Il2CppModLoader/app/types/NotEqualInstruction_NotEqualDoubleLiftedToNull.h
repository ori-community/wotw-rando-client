#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualDoubleLiftedToNull {
        inline app::NotEqualInstruction_NotEqualDoubleLiftedToNull__Class** type_info = (app::NotEqualInstruction_NotEqualDoubleLiftedToNull__Class**)(modloader::win::memory::resolve_rva(0x04778CD8));
        inline app::NotEqualInstruction_NotEqualDoubleLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualDoubleLiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualDoubleLiftedToNull");
        }
        inline app::NotEqualInstruction_NotEqualDoubleLiftedToNull* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualDoubleLiftedToNull>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualDoubleLiftedToNull
} // namespace app::classes::types
