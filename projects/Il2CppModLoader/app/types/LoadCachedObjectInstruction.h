#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadCachedObjectInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadCachedObjectInstruction__Class** type_info;
        inline app::LoadCachedObjectInstruction__Class* get_class() {
            return il2cpp::get_class<app::LoadCachedObjectInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "LoadCachedObjectInstruction");
        }
        inline app::LoadCachedObjectInstruction* create() {
            return il2cpp::create_object<app::LoadCachedObjectInstruction>(get_class());
        }
    } // namespace LoadCachedObjectInstruction
} // namespace app::classes::types
