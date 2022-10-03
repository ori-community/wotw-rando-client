#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActionMethod__Array {
        namespace {
            app::ActionMethod__Array__Class* type_info_ref = nullptr;
        }
        app::ActionMethod__Array__Class** type_info = &type_info_ref;
        inline app::ActionMethod__Array__Class* get_class() {
            return il2cpp::get_class<app::ActionMethod__Array__Class>(type_info, "", "ActionMethod[]");
        }
        inline app::ActionMethod__Array* create() {
            return il2cpp::create_object<app::ActionMethod__Array>(get_class());
        }
    } // namespace ActionMethod__Array
} // namespace app::classes::types
