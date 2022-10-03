#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Expression__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Expression__Array__Class** type_info;
        inline app::Expression__Array__Class* get_class() {
            return il2cpp::get_class<app::Expression__Array__Class>(type_info, "System.Linq.Expressions", "Expression[]");
        }
        inline app::Expression__Array* create() {
            return il2cpp::create_object<app::Expression__Array>(get_class());
        }
    } // namespace Expression__Array
} // namespace app::classes::types
