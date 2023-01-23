#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AddInstruction_AddInt32__Class.h>
#include <Modloader/app/structs/AddInstruction_AddInt32.h>

namespace app::classes::types {
    namespace AddInstruction_AddInt32 {
        inline app::AddInstruction_AddInt32__Class** type_info = (app::AddInstruction_AddInt32__Class**)(modloader::win::memory::resolve_rva(0x0475D6C8));
        inline app::AddInstruction_AddInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::AddInstruction_AddInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddInstruction", "AddInt32");
        }
        inline app::AddInstruction_AddInt32* create() {
            return il2cpp::create_object<app::AddInstruction_AddInt32>(get_class());
        }
    } // namespace AddInstruction_AddInt32
} // namespace app::classes::types
