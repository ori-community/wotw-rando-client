#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CastReferenceToEnumInstruction {
        inline app::CastReferenceToEnumInstruction__Class** type_info = (app::CastReferenceToEnumInstruction__Class**)(modloader::win::memory::resolve_rva(0x0478EB20));
        inline app::CastReferenceToEnumInstruction__Class* get_class() {
            return il2cpp::get_class<app::CastReferenceToEnumInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "CastReferenceToEnumInstruction");
        }
        inline app::CastReferenceToEnumInstruction* create() {
            return il2cpp::create_object<app::CastReferenceToEnumInstruction>(get_class());
        }
    } // namespace CastReferenceToEnumInstruction
} // namespace app::classes::types
