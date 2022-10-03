#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeshCollider__Array {
        namespace {
            app::MeshCollider__Array__Class* type_info_ref = nullptr;
        }
        app::MeshCollider__Array__Class** type_info = &type_info_ref;
        inline app::MeshCollider__Array__Class* get_class() {
            return il2cpp::get_class<app::MeshCollider__Array__Class>(type_info, "UnityEngine", "MeshCollider[]");
        }
        inline app::MeshCollider__Array* create() {
            return il2cpp::create_object<app::MeshCollider__Array>(get_class());
        }
    } // namespace MeshCollider__Array
} // namespace app::classes::types
