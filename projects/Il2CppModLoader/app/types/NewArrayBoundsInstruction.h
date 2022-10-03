#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewArrayBoundsInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NewArrayBoundsInstruction__Class** type_info;
        inline app::NewArrayBoundsInstruction__Class* get_class() {
            return il2cpp::get_class<app::NewArrayBoundsInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "NewArrayBoundsInstruction");
        }
        inline app::NewArrayBoundsInstruction* create() {
            return il2cpp::create_object<app::NewArrayBoundsInstruction>(get_class());
        }
    } // namespace NewArrayBoundsInstruction
} // namespace app::classes::types
