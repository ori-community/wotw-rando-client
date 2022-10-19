#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddOvfInstruction {
        inline app::AddOvfInstruction__Class** type_info = (app::AddOvfInstruction__Class**)(modloader::win::memory::resolve_rva(0x04790DF0));
        inline app::AddOvfInstruction__Class* get_class() {
            return il2cpp::get_class<app::AddOvfInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "AddOvfInstruction");
        }
        inline app::AddOvfInstruction* create() {
            return il2cpp::create_object<app::AddOvfInstruction>(get_class());
        }
    } // namespace AddOvfInstruction
} // namespace app::classes::types
