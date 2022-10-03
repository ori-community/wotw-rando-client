#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExpressionParser_ReservedWords__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExpressionParser_ReservedWords__Array__Class** type_info;
        inline app::ExpressionParser_ReservedWords__Array__Class* get_class() {
            return il2cpp::get_class<app::ExpressionParser_ReservedWords__Array__Class>(type_info, "System.Data", "ExpressionParser+ReservedWords[]");
        }
        inline app::ExpressionParser_ReservedWords__Array* create() {
            return il2cpp::create_object<app::ExpressionParser_ReservedWords__Array>(get_class());
        }
    } // namespace ExpressionParser_ReservedWords__Array
} // namespace app::classes::types
