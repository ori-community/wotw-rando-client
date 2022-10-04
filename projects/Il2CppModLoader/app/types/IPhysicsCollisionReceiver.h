#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPhysicsCollisionReceiver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPhysicsCollisionReceiver__Class** type_info;
        inline app::IPhysicsCollisionReceiver__Class* get_class() {
            return il2cpp::get_class<app::IPhysicsCollisionReceiver__Class>(type_info, "", "IPhysicsCollisionReceiver");
        }
    } // namespace IPhysicsCollisionReceiver
} // namespace app::classes::types
