#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AddInstruction_AddInt16__Class.h>
#include <Modloader/app/structs/AddInstruction_AddInt16.h>

namespace app::classes::types {
    namespace AddInstruction_AddInt16 {
        inline app::AddInstruction_AddInt16__Class** type_info = (app::AddInstruction_AddInt16__Class**)(modloader::win::memory::resolve_rva(0x0475E590));
        inline app::AddInstruction_AddInt16__Class* get_class() {
            return il2cpp::get_nested_class<app::AddInstruction_AddInt16__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddInstruction", "AddInt16");
        }
        inline app::AddInstruction_AddInt16* create() {
            return il2cpp::create_object<app::AddInstruction_AddInt16>(get_class());
        }
    } // namespace AddInstruction_AddInt16
} // namespace app::classes::types
