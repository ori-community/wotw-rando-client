#pragma once
#include <Modloader/app/structs/AttachToPhysicsSystem.h>
#include <Modloader/app/structs/AttachToPhysicsSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttachToPhysicsSystem {
        inline app::AttachToPhysicsSystem__Class** type_info() {
            static app::AttachToPhysicsSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttachToPhysicsSystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttachToPhysicsSystem__Class* get_class() {
            return il2cpp::get_class<app::AttachToPhysicsSystem__Class>(type_info(), "", "AttachToPhysicsSystem");
        }
        inline app::AttachToPhysicsSystem* create() {
            return il2cpp::create_object<app::AttachToPhysicsSystem>(get_class());
        }
    } // namespace AttachToPhysicsSystem
} // namespace app::classes::types
