#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoadCachedObjectInstruction {
        inline app::LoadCachedObjectInstruction__Class** type_info = (app::LoadCachedObjectInstruction__Class**)(modloader::win::memory::resolve_rva(0x04738020));
        inline app::LoadCachedObjectInstruction__Class* get_class() {
            return il2cpp::get_class<app::LoadCachedObjectInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LoadCachedObjectInstruction");
        }
        inline app::LoadCachedObjectInstruction* create() {
            return il2cpp::create_object<app::LoadCachedObjectInstruction>(get_class());
        }
    } // namespace LoadCachedObjectInstruction
} // namespace app::classes::types
