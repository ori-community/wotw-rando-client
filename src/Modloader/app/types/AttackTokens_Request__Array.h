#pragma once
#include <Modloader/app/structs/AttackTokens_Request__Array.h>
#include <Modloader/app/structs/AttackTokens_Request__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttackTokens_Request__Array {
        inline app::AttackTokens_Request__Array__Class** type_info() {
            static app::AttackTokens_Request__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttackTokens_Request__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttackTokens_Request__Array__Class* get_class() {
            return il2cpp::get_class<app::AttackTokens_Request__Array__Class>(type_info(), "", "AttackTokens+Request[]");
        }
        inline app::AttackTokens_Request__Array* create() {
            return il2cpp::create_object<app::AttackTokens_Request__Array>(get_class());
        }
    } // namespace AttackTokens_Request__Array
} // namespace app::classes::types
