#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CastReferenceToEnumInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CastReferenceToEnumInstruction__Class** type_info;
        inline app::CastReferenceToEnumInstruction__Class* get_class() {
            return il2cpp::get_class<app::CastReferenceToEnumInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "CastReferenceToEnumInstruction");
        }
        inline app::CastReferenceToEnumInstruction* create() {
            return il2cpp::create_object<app::CastReferenceToEnumInstruction>(get_class());
        }
    } // namespace CastReferenceToEnumInstruction
} // namespace app::classes::types
