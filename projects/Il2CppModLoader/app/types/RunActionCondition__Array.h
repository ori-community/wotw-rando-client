#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RunActionCondition__Array {
        namespace {
            app::RunActionCondition__Array__Class* type_info_ref = nullptr;
        }
        app::RunActionCondition__Array__Class** type_info = &type_info_ref;
        inline app::RunActionCondition__Array__Class* get_class() {
            return il2cpp::get_class<app::RunActionCondition__Array__Class>(type_info, "", "RunActionCondition[]");
        }
        inline app::RunActionCondition__Array* create() {
            return il2cpp::create_object<app::RunActionCondition__Array>(get_class());
        }
    } // namespace RunActionCondition__Array
} // namespace app::classes::types
