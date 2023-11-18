#pragma once
#include <Modloader/app/structs/IPhysicsCollisionReceiver.h>
#include <Modloader/app/structs/IPhysicsCollisionReceiver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPhysicsCollisionReceiver {
        inline app::IPhysicsCollisionReceiver__Class** type_info() {
            static app::IPhysicsCollisionReceiver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPhysicsCollisionReceiver__Class**)(modloader::win::memory::resolve_rva(0x0475CC70));
            }
            return cache;
        }
        inline app::IPhysicsCollisionReceiver__Class* get_class() {
            return il2cpp::get_class<app::IPhysicsCollisionReceiver__Class>(type_info(), "", "IPhysicsCollisionReceiver");
        }
    } // namespace IPhysicsCollisionReceiver
} // namespace app::classes::types
