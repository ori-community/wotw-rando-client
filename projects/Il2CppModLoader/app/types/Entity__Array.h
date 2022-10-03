#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Entity__Array {
        namespace {
            app::Entity__Array__Class* type_info_ref = nullptr;
        }
        app::Entity__Array__Class** type_info = &type_info_ref;
        inline app::Entity__Array__Class* get_class() {
            return il2cpp::get_class<app::Entity__Array__Class>(type_info, "Moon", "Entity[]");
        }
        inline app::Entity__Array* create() {
            return il2cpp::create_object<app::Entity__Array>(get_class());
        }
    } // namespace Entity__Array
} // namespace app::classes::types
