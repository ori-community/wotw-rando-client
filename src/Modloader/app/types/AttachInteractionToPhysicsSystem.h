#pragma once
#include <Modloader/app/structs/AttachInteractionToPhysicsSystem.h>
#include <Modloader/app/structs/AttachInteractionToPhysicsSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttachInteractionToPhysicsSystem {
        inline app::AttachInteractionToPhysicsSystem__Class** type_info() {
            static app::AttachInteractionToPhysicsSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AttachInteractionToPhysicsSystem__Class**)(modloader::win::memory::resolve_rva(0x04739470));
            }
            return cache;
        }
        inline app::AttachInteractionToPhysicsSystem__Class* get_class() {
            return il2cpp::get_class<app::AttachInteractionToPhysicsSystem__Class>(type_info(), "", "AttachInteractionToPhysicsSystem");
        }
        inline app::AttachInteractionToPhysicsSystem* create() {
            return il2cpp::create_object<app::AttachInteractionToPhysicsSystem>(get_class());
        }
    } // namespace AttachInteractionToPhysicsSystem
} // namespace app::classes::types
