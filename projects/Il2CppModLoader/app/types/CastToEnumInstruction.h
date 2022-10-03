#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CastToEnumInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CastToEnumInstruction__Class** type_info;
        inline app::CastToEnumInstruction__Class* get_class() {
            return il2cpp::get_class<app::CastToEnumInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "CastToEnumInstruction");
        }
        inline app::CastToEnumInstruction* create() {
            return il2cpp::create_object<app::CastToEnumInstruction>(get_class());
        }
    } // namespace CastToEnumInstruction
} // namespace app::classes::types
