#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Expression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Expression__Class** type_info;
        inline app::Expression__Class* get_class() {
            return il2cpp::get_class<app::Expression__Class>(type_info, "System.Linq.Expressions", "Expression");
        }
        inline app::Expression* create() {
            return il2cpp::create_object<app::Expression>(get_class());
        }
        inline app::Expression__Array* create_array(int size) {
            return il2cpp::array_new<app::Expression__Array>(get_class(), size);
        }
    } // namespace Expression
} // namespace app::classes::types
