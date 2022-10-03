#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace List_1_IAttackable___Array {
        namespace {
            app::List_1_IAttackable___Array__Class* type_info_ref = nullptr;
        }
        app::List_1_IAttackable___Array__Class** type_info = &type_info_ref;
        inline app::List_1_IAttackable___Array__Class* get_class() {
            return il2cpp::get_class<app::List_1_IAttackable___Array__Class>(type_info, "System.Collections.Generic", "List`1[IAttackable][]");
        }
        inline app::List_1_IAttackable___Array* create() {
            return il2cpp::create_object<app::List_1_IAttackable___Array>(get_class());
        }
    } // namespace List_1_IAttackable___Array
} // namespace app::classes::types
