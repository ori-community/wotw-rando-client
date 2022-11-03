#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstructionList {
        inline app::InstructionList__Class** type_info = (app::InstructionList__Class**)(modloader::win::memory::resolve_rva(0x0470A620));
        inline app::InstructionList__Class* get_class() {
            return il2cpp::get_class<app::InstructionList__Class>(type_info, "System.Linq.Expressions.Interpreter", "InstructionList");
        }
        inline app::InstructionList* create() {
            return il2cpp::create_object<app::InstructionList>(get_class());
        }
    } // namespace InstructionList
} // namespace app::classes::types
