#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction_LessThanOrEqualInt64 {
        inline app::LessThanOrEqualInstruction_LessThanOrEqualInt64__Class** type_info = (app::LessThanOrEqualInstruction_LessThanOrEqualInt64__Class**)(modloader::win::memory::resolve_rva(0x0477D270));
        inline app::LessThanOrEqualInstruction_LessThanOrEqualInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanOrEqualInstruction_LessThanOrEqualInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction", "LessThanOrEqualInt64");
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualInt64* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction_LessThanOrEqualInt64>(get_class());
        }
    } // namespace LessThanOrEqualInstruction_LessThanOrEqualInt64
} // namespace app::classes::types
