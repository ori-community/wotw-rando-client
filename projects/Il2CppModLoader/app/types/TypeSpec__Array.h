#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeSpec__Array {
        namespace {
            app::TypeSpec__Array__Class* type_info_ref = nullptr;
        }
        app::TypeSpec__Array__Class** type_info = &type_info_ref;
        inline app::TypeSpec__Array__Class* get_class() {
            return il2cpp::get_class<app::TypeSpec__Array__Class>(type_info, "System", "TypeSpec[]");
        }
        inline app::TypeSpec__Array* create() {
            return il2cpp::create_object<app::TypeSpec__Array>(get_class());
        }
    } // namespace TypeSpec__Array
} // namespace app::classes::types
