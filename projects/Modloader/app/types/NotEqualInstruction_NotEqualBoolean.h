#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualBoolean {
        inline app::NotEqualInstruction_NotEqualBoolean__Class** type_info = (app::NotEqualInstruction_NotEqualBoolean__Class**)(modloader::win::memory::resolve_rva(0x04780840));
        inline app::NotEqualInstruction_NotEqualBoolean__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualBoolean__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualBoolean");
        }
        inline app::NotEqualInstruction_NotEqualBoolean* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualBoolean>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualBoolean
} // namespace app::classes::types
