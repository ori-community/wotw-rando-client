#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttackTokens_Request__Array {
        namespace {
            app::AttackTokens_Request__Array__Class* type_info_ref = nullptr;
        }
        app::AttackTokens_Request__Array__Class** type_info = &type_info_ref;
        inline app::AttackTokens_Request__Array__Class* get_class() {
            return il2cpp::get_class<app::AttackTokens_Request__Array__Class>(type_info, "", "AttackTokens+Request[]");
        }
        inline app::AttackTokens_Request__Array* create() {
            return il2cpp::create_object<app::AttackTokens_Request__Array>(get_class());
        }
    } // namespace AttackTokens_Request__Array
} // namespace app::classes::types
