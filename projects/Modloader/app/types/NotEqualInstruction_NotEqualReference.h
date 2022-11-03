#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualReference {
        inline app::NotEqualInstruction_NotEqualReference__Class** type_info = (app::NotEqualInstruction_NotEqualReference__Class**)(modloader::win::memory::resolve_rva(0x0471B220));
        inline app::NotEqualInstruction_NotEqualReference__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualReference__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualReference");
        }
        inline app::NotEqualInstruction_NotEqualReference* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualReference>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualReference
} // namespace app::classes::types
