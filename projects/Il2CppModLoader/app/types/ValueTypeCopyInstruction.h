#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValueTypeCopyInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ValueTypeCopyInstruction__Class** type_info;
        inline app::ValueTypeCopyInstruction__Class* get_class() {
            return il2cpp::get_class<app::ValueTypeCopyInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "ValueTypeCopyInstruction");
        }
        inline app::ValueTypeCopyInstruction* create() {
            return il2cpp::create_object<app::ValueTypeCopyInstruction>(get_class());
        }
    } // namespace ValueTypeCopyInstruction
} // namespace app::classes::types
