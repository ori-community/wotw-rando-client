#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CastInstruction {
        inline app::CastInstruction__Class** type_info = (app::CastInstruction__Class**)(modloader::win::memory::resolve_rva(0x047561F8));
        inline app::CastInstruction__Class* get_class() {
            return il2cpp::get_class<app::CastInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "CastInstruction");
        }
        inline app::CastInstruction* create() {
            return il2cpp::create_object<app::CastInstruction>(get_class());
        }
    } // namespace CastInstruction
} // namespace app::classes::types
