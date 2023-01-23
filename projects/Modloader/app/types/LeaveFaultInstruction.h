#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeaveFaultInstruction__Class.h>
#include <Modloader/app/structs/LeaveFaultInstruction.h>

namespace app::classes::types {
    namespace LeaveFaultInstruction {
        inline app::LeaveFaultInstruction__Class** type_info = (app::LeaveFaultInstruction__Class**)(modloader::win::memory::resolve_rva(0x0472F190));
        inline app::LeaveFaultInstruction__Class* get_class() {
            return il2cpp::get_class<app::LeaveFaultInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeaveFaultInstruction");
        }
        inline app::LeaveFaultInstruction* create() {
            return il2cpp::create_object<app::LeaveFaultInstruction>(get_class());
        }
    } // namespace LeaveFaultInstruction
} // namespace app::classes::types
