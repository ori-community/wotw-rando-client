#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OrInstruction_OrInt32__Class.h>
#include <Modloader/app/structs/OrInstruction_OrInt32.h>

namespace app::classes::types {
    namespace OrInstruction_OrInt32 {
        inline app::OrInstruction_OrInt32__Class** type_info = (app::OrInstruction_OrInt32__Class**)(modloader::win::memory::resolve_rva(0x04789308));
        inline app::OrInstruction_OrInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::OrInstruction_OrInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "OrInstruction", "OrInt32");
        }
        inline app::OrInstruction_OrInt32* create() {
            return il2cpp::create_object<app::OrInstruction_OrInt32>(get_class());
        }
    } // namespace OrInstruction_OrInt32
} // namespace app::classes::types
