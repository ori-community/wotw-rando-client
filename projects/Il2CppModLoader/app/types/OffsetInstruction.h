#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OffsetInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OffsetInstruction__Class** type_info;
        inline app::OffsetInstruction__Class* get_class() {
            return il2cpp::get_class<app::OffsetInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "OffsetInstruction");
        }
        inline app::OffsetInstruction* create() {
            return il2cpp::create_object<app::OffsetInstruction>(get_class());
        }
    } // namespace OffsetInstruction
} // namespace app::classes::types
