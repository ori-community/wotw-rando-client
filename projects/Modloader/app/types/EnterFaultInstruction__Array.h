#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnterFaultInstruction__Array__Class.h>
#include <Modloader/app/structs/EnterFaultInstruction__Array.h>

namespace app::classes::types {
    namespace EnterFaultInstruction__Array {
        inline app::EnterFaultInstruction__Array__Class** type_info = (app::EnterFaultInstruction__Array__Class**)(modloader::win::memory::resolve_rva(0x04711320));
        inline app::EnterFaultInstruction__Array__Class* get_class() {
            return il2cpp::get_class<app::EnterFaultInstruction__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "EnterFaultInstruction[]");
        }
        inline app::EnterFaultInstruction__Array* create() {
            return il2cpp::create_object<app::EnterFaultInstruction__Array>(get_class());
        }
    } // namespace EnterFaultInstruction__Array
} // namespace app::classes::types
