#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeftShiftInstruction {
        inline app::LeftShiftInstruction__Class** type_info = (app::LeftShiftInstruction__Class**)(modloader::win::memory::resolve_rva(0x04751158));
        inline app::LeftShiftInstruction__Class* get_class() {
            return il2cpp::get_class<app::LeftShiftInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LeftShiftInstruction");
        }
        inline app::LeftShiftInstruction* create() {
            return il2cpp::create_object<app::LeftShiftInstruction>(get_class());
        }
    } // namespace LeftShiftInstruction
} // namespace app::classes::types
