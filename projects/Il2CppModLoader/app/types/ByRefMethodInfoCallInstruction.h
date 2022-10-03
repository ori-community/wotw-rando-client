#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ByRefMethodInfoCallInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ByRefMethodInfoCallInstruction__Class** type_info;
        inline app::ByRefMethodInfoCallInstruction__Class* get_class() {
            return il2cpp::get_class<app::ByRefMethodInfoCallInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "ByRefMethodInfoCallInstruction");
        }
        inline app::ByRefMethodInfoCallInstruction* create() {
            return il2cpp::create_object<app::ByRefMethodInfoCallInstruction>(get_class());
        }
    } // namespace ByRefMethodInfoCallInstruction
} // namespace app::classes::types
