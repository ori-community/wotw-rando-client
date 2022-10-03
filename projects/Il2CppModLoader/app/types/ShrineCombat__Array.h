#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShrineCombat__Array {
        namespace {
            app::ShrineCombat__Array__Class* type_info_ref = nullptr;
        }
        app::ShrineCombat__Array__Class** type_info = &type_info_ref;
        inline app::ShrineCombat__Array__Class* get_class() {
            return il2cpp::get_class<app::ShrineCombat__Array__Class>(type_info, "", "ShrineCombat[]");
        }
        inline app::ShrineCombat__Array* create() {
            return il2cpp::create_object<app::ShrineCombat__Array>(get_class());
        }
    } // namespace ShrineCombat__Array
} // namespace app::classes::types
