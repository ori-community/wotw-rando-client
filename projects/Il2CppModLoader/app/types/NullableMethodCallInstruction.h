#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NullableMethodCallInstruction {
        inline app::NullableMethodCallInstruction__Class** type_info = (app::NullableMethodCallInstruction__Class**)(modloader::win::memory::resolve_rva(0x0472FC98));
        inline app::NullableMethodCallInstruction__Class* get_class() {
            return il2cpp::get_class<app::NullableMethodCallInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "NullableMethodCallInstruction");
        }
        inline app::NullableMethodCallInstruction* create() {
            return il2cpp::create_object<app::NullableMethodCallInstruction>(get_class());
        }
    } // namespace NullableMethodCallInstruction
} // namespace app::classes::types
