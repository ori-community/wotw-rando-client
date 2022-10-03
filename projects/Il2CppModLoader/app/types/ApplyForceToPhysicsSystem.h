#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ApplyForceToPhysicsSystem {
        namespace {
            app::ApplyForceToPhysicsSystem__Class* type_info_ref = nullptr;
        }
        app::ApplyForceToPhysicsSystem__Class** type_info = &type_info_ref;
        inline app::ApplyForceToPhysicsSystem__Class* get_class() {
            return il2cpp::get_class<app::ApplyForceToPhysicsSystem__Class>(type_info, "", "ApplyForceToPhysicsSystem");
        }
        inline app::ApplyForceToPhysicsSystem* create() {
            return il2cpp::create_object<app::ApplyForceToPhysicsSystem>(get_class());
        }
    } // namespace ApplyForceToPhysicsSystem
} // namespace app::classes::types
