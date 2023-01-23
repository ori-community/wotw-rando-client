#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MulInstruction_MulSingle__Class.h>
#include <Modloader/app/structs/MulInstruction_MulSingle.h>

namespace app::classes::types {
    namespace MulInstruction_MulSingle {
        inline app::MulInstruction_MulSingle__Class** type_info = (app::MulInstruction_MulSingle__Class**)(modloader::win::memory::resolve_rva(0x0476C1C8));
        inline app::MulInstruction_MulSingle__Class* get_class() {
            return il2cpp::get_nested_class<app::MulInstruction_MulSingle__Class>(type_info, "System.Linq.Expressions.Interpreter", "MulInstruction", "MulSingle");
        }
        inline app::MulInstruction_MulSingle* create() {
            return il2cpp::create_object<app::MulInstruction_MulSingle>(get_class());
        }
    } // namespace MulInstruction_MulSingle
} // namespace app::classes::types
