#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LessThanOrEqualInstruction_LessThanOrEqualInt32 {
        inline app::LessThanOrEqualInstruction_LessThanOrEqualInt32__Class** type_info = (app::LessThanOrEqualInstruction_LessThanOrEqualInt32__Class**)(modloader::win::memory::resolve_rva(0x0478D740));
        inline app::LessThanOrEqualInstruction_LessThanOrEqualInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::LessThanOrEqualInstruction_LessThanOrEqualInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "LessThanOrEqualInstruction", "LessThanOrEqualInt32");
        }
        inline app::LessThanOrEqualInstruction_LessThanOrEqualInt32* create() {
            return il2cpp::create_object<app::LessThanOrEqualInstruction_LessThanOrEqualInt32>(get_class());
        }
    } // namespace LessThanOrEqualInstruction_LessThanOrEqualInt32
} // namespace app::classes::types
