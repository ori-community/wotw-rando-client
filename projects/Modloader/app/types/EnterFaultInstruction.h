#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnterFaultInstruction {
        inline app::EnterFaultInstruction__Class** type_info = (app::EnterFaultInstruction__Class**)(modloader::win::memory::resolve_rva(0x047717F8));
        inline app::EnterFaultInstruction__Class* get_class() {
            return il2cpp::get_class<app::EnterFaultInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "EnterFaultInstruction");
        }
        inline app::EnterFaultInstruction* create() {
            return il2cpp::create_object<app::EnterFaultInstruction>(get_class());
        }
        inline app::EnterFaultInstruction__Array* create_array(int size) {
            return il2cpp::array_new<app::EnterFaultInstruction__Array>(get_class(), size);
        }
        inline app::EnterFaultInstruction__Array* create_array(const std::vector<app::EnterFaultInstruction*>& items) {
            return il2cpp::array_new<app::EnterFaultInstruction__Array>(get_class(), items);
        }
    } // namespace EnterFaultInstruction
} // namespace app::classes::types
