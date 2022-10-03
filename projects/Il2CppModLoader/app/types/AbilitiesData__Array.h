#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AbilitiesData__Array {
        namespace {
            app::AbilitiesData__Array__Class* type_info_ref = nullptr;
        }
        app::AbilitiesData__Array__Class** type_info = &type_info_ref;
        inline app::AbilitiesData__Array__Class* get_class() {
            return il2cpp::get_class<app::AbilitiesData__Array__Class>(type_info, "", "AbilitiesData[]");
        }
        inline app::AbilitiesData__Array* create() {
            return il2cpp::create_object<app::AbilitiesData__Array>(get_class());
        }
    } // namespace AbilitiesData__Array
} // namespace app::classes::types
