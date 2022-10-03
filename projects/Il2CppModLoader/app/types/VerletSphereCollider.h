#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletSphereCollider {
        namespace {
            app::VerletSphereCollider__Class* type_info_ref = nullptr;
        }
        app::VerletSphereCollider__Class** type_info = &type_info_ref;
        inline app::VerletSphereCollider__Class* get_class() {
            return il2cpp::get_class<app::VerletSphereCollider__Class>(type_info, "", "VerletSphereCollider");
        }
        inline app::VerletSphereCollider* create() {
            return il2cpp::create_object<app::VerletSphereCollider>(get_class());
        }
    } // namespace VerletSphereCollider
} // namespace app::classes::types
