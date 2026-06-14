#pragma once
#include <Modloader/app/structs/RuntimeVariablesInstruction.h>
#include <Modloader/app/structs/RuntimeVariablesInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeVariablesInstruction {
        inline app::RuntimeVariablesInstruction__Class** type_info() {
            static app::RuntimeVariablesInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeVariablesInstruction__Class**)(modloader::win::memory::resolve_rva(0x047448C0));
            }
            return cache;
        }
        inline app::RuntimeVariablesInstruction__Class* get_class() {
            return il2cpp::get_class<app::RuntimeVariablesInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "RuntimeVariablesInstruction");
        }
        inline app::RuntimeVariablesInstruction* create() {
            return il2cpp::create_object<app::RuntimeVariablesInstruction>(get_class());
        }
    } // namespace RuntimeVariablesInstruction
} // namespace app::classes::types
