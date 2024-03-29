#pragma once
#include <Modloader/app/structs/AssignLocalInstruction.h>
#include <Modloader/app/structs/AssignLocalInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssignLocalInstruction {
        inline app::AssignLocalInstruction__Class** type_info() {
            static app::AssignLocalInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AssignLocalInstruction__Class**)(modloader::win::memory::resolve_rva(0x04750D30));
            }
            return cache;
        }
        inline app::AssignLocalInstruction__Class* get_class() {
            return il2cpp::get_class<app::AssignLocalInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "AssignLocalInstruction");
        }
        inline app::AssignLocalInstruction* create() {
            return il2cpp::create_object<app::AssignLocalInstruction>(get_class());
        }
    } // namespace AssignLocalInstruction
} // namespace app::classes::types
