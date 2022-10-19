#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NegateInstruction {
        inline app::NegateInstruction__Class** type_info = (app::NegateInstruction__Class**)(modloader::win::memory::resolve_rva(0x04778010));
        inline app::NegateInstruction__Class* get_class() {
            return il2cpp::get_class<app::NegateInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "NegateInstruction");
        }
        inline app::NegateInstruction* create() {
            return il2cpp::create_object<app::NegateInstruction>(get_class());
        }
    } // namespace NegateInstruction
} // namespace app::classes::types
