#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OrInstruction {
        inline app::OrInstruction__Class** type_info = (app::OrInstruction__Class**)(modloader::win::memory::resolve_rva(0x04731EB8));
        inline app::OrInstruction__Class* get_class() {
            return il2cpp::get_class<app::OrInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "OrInstruction");
        }
        inline app::OrInstruction* create() {
            return il2cpp::create_object<app::OrInstruction>(get_class());
        }
    } // namespace OrInstruction
} // namespace app::classes::types
