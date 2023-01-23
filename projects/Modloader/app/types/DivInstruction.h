#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DivInstruction__Class.h>
#include <Modloader/app/structs/DivInstruction.h>

namespace app::classes::types {
    namespace DivInstruction {
        inline app::DivInstruction__Class** type_info = (app::DivInstruction__Class**)(modloader::win::memory::resolve_rva(0x0472F8B0));
        inline app::DivInstruction__Class* get_class() {
            return il2cpp::get_class<app::DivInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "DivInstruction");
        }
        inline app::DivInstruction* create() {
            return il2cpp::create_object<app::DivInstruction>(get_class());
        }
    } // namespace DivInstruction
} // namespace app::classes::types
