#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Instruction__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Instruction__Array__Class** type_info;
        inline app::Instruction__Array__Class* get_class() {
            return il2cpp::get_class<app::Instruction__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "Instruction[]");
        }
        inline app::Instruction__Array* create() {
            return il2cpp::create_object<app::Instruction__Array>(get_class());
        }
        inline app::Instruction__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::Instruction__Array__Array>(get_class(), size);
        }
        inline app::Instruction__Array__Array* create_array(const std::vector<app::Instruction__Array*>& items) {
            return il2cpp::array_new<app::Instruction__Array__Array>(get_class(), items);
        }
    } // namespace Instruction__Array
} // namespace app::classes::types
