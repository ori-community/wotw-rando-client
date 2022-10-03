#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeshRenderer__Array {
        namespace {
            app::MeshRenderer__Array__Class* type_info_ref = nullptr;
        }
        app::MeshRenderer__Array__Class** type_info = &type_info_ref;
        inline app::MeshRenderer__Array__Class* get_class() {
            return il2cpp::get_class<app::MeshRenderer__Array__Class>(type_info, "UnityEngine", "MeshRenderer[]");
        }
        inline app::MeshRenderer__Array* create() {
            return il2cpp::create_object<app::MeshRenderer__Array>(get_class());
        }
    } // namespace MeshRenderer__Array
} // namespace app::classes::types
