#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MulOvfInstruction {
        inline app::MulOvfInstruction__Class** type_info = (app::MulOvfInstruction__Class**)(modloader::win::memory::resolve_rva(0x0470B670));
        inline app::MulOvfInstruction__Class* get_class() {
            return il2cpp::get_class<app::MulOvfInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "MulOvfInstruction");
        }
        inline app::MulOvfInstruction* create() {
            return il2cpp::create_object<app::MulOvfInstruction>(get_class());
        }
    } // namespace MulOvfInstruction
} // namespace app::classes::types
