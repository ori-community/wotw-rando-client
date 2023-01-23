#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IncrementInstruction__Class.h>
#include <Modloader/app/structs/IncrementInstruction.h>

namespace app::classes::types {
    namespace IncrementInstruction {
        inline app::IncrementInstruction__Class** type_info = (app::IncrementInstruction__Class**)(modloader::win::memory::resolve_rva(0x04747A18));
        inline app::IncrementInstruction__Class* get_class() {
            return il2cpp::get_class<app::IncrementInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "IncrementInstruction");
        }
        inline app::IncrementInstruction* create() {
            return il2cpp::create_object<app::IncrementInstruction>(get_class());
        }
    } // namespace IncrementInstruction
} // namespace app::classes::types
