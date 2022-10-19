#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnterTryCatchFinallyInstruction {
        inline app::EnterTryCatchFinallyInstruction__Class** type_info = (app::EnterTryCatchFinallyInstruction__Class**)(modloader::win::memory::resolve_rva(0x0471A098));
        inline app::EnterTryCatchFinallyInstruction__Class* get_class() {
            return il2cpp::get_class<app::EnterTryCatchFinallyInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "EnterTryCatchFinallyInstruction");
        }
        inline app::EnterTryCatchFinallyInstruction* create() {
            return il2cpp::create_object<app::EnterTryCatchFinallyInstruction>(get_class());
        }
    } // namespace EnterTryCatchFinallyInstruction
} // namespace app::classes::types
