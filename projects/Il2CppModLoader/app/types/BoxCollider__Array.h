#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BoxCollider__Array {
        namespace {
            app::BoxCollider__Array__Class* type_info_ref = nullptr;
        }
        app::BoxCollider__Array__Class** type_info = &type_info_ref;
        inline app::BoxCollider__Array__Class* get_class() {
            return il2cpp::get_class<app::BoxCollider__Array__Class>(type_info, "UnityEngine", "BoxCollider[]");
        }
        inline app::BoxCollider__Array* create() {
            return il2cpp::create_object<app::BoxCollider__Array>(get_class());
        }
    } // namespace BoxCollider__Array
} // namespace app::classes::types
