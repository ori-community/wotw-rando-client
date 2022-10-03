#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityBehaviour__Array {
        namespace {
            app::EntityBehaviour__Array__Class* type_info_ref = nullptr;
        }
        app::EntityBehaviour__Array__Class** type_info = &type_info_ref;
        inline app::EntityBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityBehaviour__Array__Class>(type_info, "Moon", "EntityBehaviour[]");
        }
        inline app::EntityBehaviour__Array* create() {
            return il2cpp::create_object<app::EntityBehaviour__Array>(get_class());
        }
    } // namespace EntityBehaviour__Array
} // namespace app::classes::types
