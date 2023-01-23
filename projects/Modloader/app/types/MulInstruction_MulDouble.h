#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MulInstruction_MulDouble__Class.h>
#include <Modloader/app/structs/MulInstruction_MulDouble.h>

namespace app::classes::types {
    namespace MulInstruction_MulDouble {
        inline app::MulInstruction_MulDouble__Class** type_info = (app::MulInstruction_MulDouble__Class**)(modloader::win::memory::resolve_rva(0x047941D8));
        inline app::MulInstruction_MulDouble__Class* get_class() {
            return il2cpp::get_nested_class<app::MulInstruction_MulDouble__Class>(type_info, "System.Linq.Expressions.Interpreter", "MulInstruction", "MulDouble");
        }
        inline app::MulInstruction_MulDouble* create() {
            return il2cpp::create_object<app::MulInstruction_MulDouble>(get_class());
        }
    } // namespace MulInstruction_MulDouble
} // namespace app::classes::types
