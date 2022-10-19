#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StoreFieldInstruction {
        inline app::StoreFieldInstruction__Class** type_info = (app::StoreFieldInstruction__Class**)(modloader::win::memory::resolve_rva(0x0478AED8));
        inline app::StoreFieldInstruction__Class* get_class() {
            return il2cpp::get_class<app::StoreFieldInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "StoreFieldInstruction");
        }
        inline app::StoreFieldInstruction* create() {
            return il2cpp::create_object<app::StoreFieldInstruction>(get_class());
        }
    } // namespace StoreFieldInstruction
} // namespace app::classes::types
