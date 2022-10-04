#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBoxableInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IBoxableInstruction__Class** type_info;
        inline app::IBoxableInstruction__Class* get_class() {
            return il2cpp::get_class<app::IBoxableInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "IBoxableInstruction");
        }
    } // namespace IBoxableInstruction
} // namespace app::classes::types
