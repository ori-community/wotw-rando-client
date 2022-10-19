#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ApplyForceToPhysicsSystem {
        namespace {
            inline app::ApplyForceToPhysicsSystem__Class* type_info_ref = nullptr;
        }
        inline app::ApplyForceToPhysicsSystem__Class** type_info = &type_info_ref;
        inline app::ApplyForceToPhysicsSystem__Class* get_class() {
            return il2cpp::get_class<app::ApplyForceToPhysicsSystem__Class>(type_info, "", "ApplyForceToPhysicsSystem");
        }
        inline app::ApplyForceToPhysicsSystem* create() {
            return il2cpp::create_object<app::ApplyForceToPhysicsSystem>(get_class());
        }
    } // namespace ApplyForceToPhysicsSystem
} // namespace app::classes::types
