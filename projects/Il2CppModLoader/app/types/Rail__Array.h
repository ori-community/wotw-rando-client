#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Rail__Array {
        namespace {
            app::Rail__Array__Class* type_info_ref = nullptr;
        }
        app::Rail__Array__Class** type_info = &type_info_ref;
        inline app::Rail__Array__Class* get_class() {
            return il2cpp::get_class<app::Rail__Array__Class>(type_info, "", "Rail[]");
        }
        inline app::Rail__Array* create() {
            return il2cpp::create_object<app::Rail__Array>(get_class());
        }
    } // namespace Rail__Array
} // namespace app::classes::types
