#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RuntimeVariablesInstruction__Class.h>
#include <Modloader/app/structs/RuntimeVariablesInstruction.h>

namespace app::classes::types {
    namespace RuntimeVariablesInstruction {
        inline app::RuntimeVariablesInstruction__Class** type_info = (app::RuntimeVariablesInstruction__Class**)(modloader::win::memory::resolve_rva(0x047448C0));
        inline app::RuntimeVariablesInstruction__Class* get_class() {
            return il2cpp::get_class<app::RuntimeVariablesInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "RuntimeVariablesInstruction");
        }
        inline app::RuntimeVariablesInstruction* create() {
            return il2cpp::create_object<app::RuntimeVariablesInstruction>(get_class());
        }
    } // namespace RuntimeVariablesInstruction
} // namespace app::classes::types
