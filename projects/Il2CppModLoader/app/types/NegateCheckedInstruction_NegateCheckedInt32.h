#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NegateCheckedInstruction_NegateCheckedInt32 {
        inline app::NegateCheckedInstruction_NegateCheckedInt32__Class** type_info = (app::NegateCheckedInstruction_NegateCheckedInt32__Class**)(modloader::win::memory::resolve_rva(0x047247D8));
        inline app::NegateCheckedInstruction_NegateCheckedInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::NegateCheckedInstruction_NegateCheckedInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "NegateCheckedInstruction", "NegateCheckedInt32");
        }
        inline app::NegateCheckedInstruction_NegateCheckedInt32* create() {
            return il2cpp::create_object<app::NegateCheckedInstruction_NegateCheckedInt32>(get_class());
        }
    } // namespace NegateCheckedInstruction_NegateCheckedInt32
} // namespace app::classes::types
