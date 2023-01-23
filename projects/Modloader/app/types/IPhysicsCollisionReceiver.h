#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IPhysicsCollisionReceiver__Class.h>

namespace app::classes::types {
    namespace IPhysicsCollisionReceiver {
        inline app::IPhysicsCollisionReceiver__Class** type_info = (app::IPhysicsCollisionReceiver__Class**)(modloader::win::memory::resolve_rva(0x0475CC70));
        inline app::IPhysicsCollisionReceiver__Class* get_class() {
            return il2cpp::get_class<app::IPhysicsCollisionReceiver__Class>(type_info, "", "IPhysicsCollisionReceiver");
        }
    } // namespace IPhysicsCollisionReceiver
} // namespace app::classes::types
