#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConditionValidator__Array {
        namespace {
            app::ConditionValidator__Array__Class* type_info_ref = nullptr;
        }
        app::ConditionValidator__Array__Class** type_info = &type_info_ref;
        inline app::ConditionValidator__Array__Class* get_class() {
            return il2cpp::get_class<app::ConditionValidator__Array__Class>(type_info, "", "ConditionValidator[]");
        }
        inline app::ConditionValidator__Array* create() {
            return il2cpp::create_object<app::ConditionValidator__Array>(get_class());
        }
    } // namespace ConditionValidator__Array
} // namespace app::classes::types
