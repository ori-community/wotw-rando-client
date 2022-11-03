#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NegateCheckedInstruction_NegateCheckedInt16 {
        inline app::NegateCheckedInstruction_NegateCheckedInt16__Class** type_info = (app::NegateCheckedInstruction_NegateCheckedInt16__Class**)(modloader::win::memory::resolve_rva(0x0470C310));
        inline app::NegateCheckedInstruction_NegateCheckedInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::NegateCheckedInstruction_NegateCheckedInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "NegateCheckedInstruction", "NegateCheckedInt16");
        }
        inline app::NegateCheckedInstruction_NegateCheckedInt16* create() {
            return il2cpp::create_object<app::NegateCheckedInstruction_NegateCheckedInt16>(get_class());
        }
    } // namespace NegateCheckedInstruction_NegateCheckedInt16
} // namespace app::classes::types
