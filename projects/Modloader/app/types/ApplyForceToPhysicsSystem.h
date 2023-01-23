#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ApplyForceToPhysicsSystem__Class.h>
#include <Modloader/app/structs/ApplyForceToPhysicsSystem.h>

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
