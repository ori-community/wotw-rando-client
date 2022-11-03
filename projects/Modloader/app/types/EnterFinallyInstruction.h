#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnterFinallyInstruction {
        inline app::EnterFinallyInstruction__Class** type_info = (app::EnterFinallyInstruction__Class**)(modloader::win::memory::resolve_rva(0x04736A30));
        inline app::EnterFinallyInstruction__Class* get_class() {
            return il2cpp::get_class<app::EnterFinallyInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "EnterFinallyInstruction");
        }
        inline app::EnterFinallyInstruction* create() {
            return il2cpp::create_object<app::EnterFinallyInstruction>(get_class());
        }
        inline app::EnterFinallyInstruction__Array* create_array(int size) {
            return il2cpp::array_new<app::EnterFinallyInstruction__Array>(get_class(), size);
        }
        inline app::EnterFinallyInstruction__Array* create_array(const std::vector<app::EnterFinallyInstruction*>& items) {
            return il2cpp::array_new<app::EnterFinallyInstruction__Array>(get_class(), items);
        }
    } // namespace EnterFinallyInstruction
} // namespace app::classes::types
