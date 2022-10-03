#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttachInteractionToPhysicsSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AttachInteractionToPhysicsSystem__Class** type_info;
        inline app::AttachInteractionToPhysicsSystem__Class* get_class() {
            return il2cpp::get_class<app::AttachInteractionToPhysicsSystem__Class>(type_info, "", "AttachInteractionToPhysicsSystem");
        }
        inline app::AttachInteractionToPhysicsSystem* create() {
            return il2cpp::create_object<app::AttachInteractionToPhysicsSystem>(get_class());
        }
    } // namespace AttachInteractionToPhysicsSystem
} // namespace app::classes::types
