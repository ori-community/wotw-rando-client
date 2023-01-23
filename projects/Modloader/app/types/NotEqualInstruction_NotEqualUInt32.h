#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualUInt32__Class.h>
#include <Modloader/app/structs/NotEqualInstruction_NotEqualUInt32.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualUInt32 {
        inline app::NotEqualInstruction_NotEqualUInt32__Class** type_info = (app::NotEqualInstruction_NotEqualUInt32__Class**)(modloader::win::memory::resolve_rva(0x04772E00));
        inline app::NotEqualInstruction_NotEqualUInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualUInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualUInt32");
        }
        inline app::NotEqualInstruction_NotEqualUInt32* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualUInt32>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualUInt32
} // namespace app::classes::types
