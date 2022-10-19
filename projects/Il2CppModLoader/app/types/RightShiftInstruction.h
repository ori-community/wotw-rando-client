#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RightShiftInstruction {
        inline app::RightShiftInstruction__Class** type_info = (app::RightShiftInstruction__Class**)(modloader::win::memory::resolve_rva(0x0477D658));
        inline app::RightShiftInstruction__Class* get_class() {
            return il2cpp::get_class<app::RightShiftInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "RightShiftInstruction");
        }
        inline app::RightShiftInstruction* create() {
            return il2cpp::create_object<app::RightShiftInstruction>(get_class());
        }
    } // namespace RightShiftInstruction
} // namespace app::classes::types
