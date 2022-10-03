#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CastInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CastInstruction__Class** type_info;
        inline app::CastInstruction__Class* get_class() {
            return il2cpp::get_class<app::CastInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "CastInstruction");
        }
        inline app::CastInstruction* create() {
            return il2cpp::create_object<app::CastInstruction>(get_class());
        }
    } // namespace CastInstruction
} // namespace app::classes::types
