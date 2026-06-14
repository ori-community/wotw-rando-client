#pragma once
#include <Modloader/app/structs/AssignLocalToClosureInstruction.h>
#include <Modloader/app/structs/AssignLocalToClosureInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssignLocalToClosureInstruction {
        inline app::AssignLocalToClosureInstruction__Class** type_info() {
            static app::AssignLocalToClosureInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AssignLocalToClosureInstruction__Class**)(modloader::win::memory::resolve_rva(0x04731E40));
            }
            return cache;
        }
        inline app::AssignLocalToClosureInstruction__Class* get_class() {
            return il2cpp::get_class<app::AssignLocalToClosureInstruction__Class>(type_info(), "System.Linq.Expressions.Interpreter", "AssignLocalToClosureInstruction");
        }
        inline app::AssignLocalToClosureInstruction* create() {
            return il2cpp::create_object<app::AssignLocalToClosureInstruction>(get_class());
        }
    } // namespace AssignLocalToClosureInstruction
} // namespace app::classes::types
