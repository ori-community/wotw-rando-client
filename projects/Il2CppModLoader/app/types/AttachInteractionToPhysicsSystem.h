#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttachInteractionToPhysicsSystem {
        inline app::AttachInteractionToPhysicsSystem__Class** type_info = (app::AttachInteractionToPhysicsSystem__Class**)(modloader::win::memory::resolve_rva(0x04739470));
        inline app::AttachInteractionToPhysicsSystem__Class* get_class() {
            return il2cpp::get_class<app::AttachInteractionToPhysicsSystem__Class>(type_info, "", "AttachInteractionToPhysicsSystem");
        }
        inline app::AttachInteractionToPhysicsSystem* create() {
            return il2cpp::create_object<app::AttachInteractionToPhysicsSystem>(get_class());
        }
    } // namespace AttachInteractionToPhysicsSystem
} // namespace app::classes::types
