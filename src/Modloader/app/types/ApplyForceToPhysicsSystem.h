#pragma once
#include <Modloader/app/structs/ApplyForceToPhysicsSystem.h>
#include <Modloader/app/structs/ApplyForceToPhysicsSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ApplyForceToPhysicsSystem {
        inline app::ApplyForceToPhysicsSystem__Class** type_info() {
            static app::ApplyForceToPhysicsSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ApplyForceToPhysicsSystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ApplyForceToPhysicsSystem__Class* get_class() {
            return il2cpp::get_class<app::ApplyForceToPhysicsSystem__Class>(type_info(), "", "ApplyForceToPhysicsSystem");
        }
        inline app::ApplyForceToPhysicsSystem* create() {
            return il2cpp::create_object<app::ApplyForceToPhysicsSystem>(get_class());
        }
    } // namespace ApplyForceToPhysicsSystem
} // namespace app::classes::types
