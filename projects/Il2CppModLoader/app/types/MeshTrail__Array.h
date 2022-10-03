#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeshTrail__Array {
        namespace {
            app::MeshTrail__Array__Class* type_info_ref = nullptr;
        }
        app::MeshTrail__Array__Class** type_info = &type_info_ref;
        inline app::MeshTrail__Array__Class* get_class() {
            return il2cpp::get_class<app::MeshTrail__Array__Class>(type_info, "", "MeshTrail[]");
        }
        inline app::MeshTrail__Array* create() {
            return il2cpp::create_object<app::MeshTrail__Array>(get_class());
        }
    } // namespace MeshTrail__Array
} // namespace app::classes::types
