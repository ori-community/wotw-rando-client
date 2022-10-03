#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NullableMethodCallInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NullableMethodCallInstruction__Class** type_info;
        inline app::NullableMethodCallInstruction__Class* get_class() {
            return il2cpp::get_class<app::NullableMethodCallInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction");
        }
        inline app::NullableMethodCallInstruction* create() {
            return il2cpp::create_object<app::NullableMethodCallInstruction>(get_class());
        }
    } // namespace NullableMethodCallInstruction
} // namespace app::classes::types
