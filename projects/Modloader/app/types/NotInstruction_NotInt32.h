#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotInstruction_NotInt32 {
        inline app::NotInstruction_NotInt32__Class** type_info = (app::NotInstruction_NotInt32__Class**)(modloader::win::memory::resolve_rva(0x04749440));
        inline app::NotInstruction_NotInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::NotInstruction_NotInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotInstruction", "NotInt32");
        }
        inline app::NotInstruction_NotInt32* create() {
            return il2cpp::create_object<app::NotInstruction_NotInt32>(get_class());
        }
    } // namespace NotInstruction_NotInt32
} // namespace app::classes::types
