#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnterTryFaultInstruction {
        inline app::EnterTryFaultInstruction__Class** type_info = (app::EnterTryFaultInstruction__Class**)(modloader::win::memory::resolve_rva(0x0474C768));
        inline app::EnterTryFaultInstruction__Class* get_class() {
            return il2cpp::get_class<app::EnterTryFaultInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "EnterTryFaultInstruction");
        }
        inline app::EnterTryFaultInstruction* create() {
            return il2cpp::create_object<app::EnterTryFaultInstruction>(get_class());
        }
    } // namespace EnterTryFaultInstruction
} // namespace app::classes::types
