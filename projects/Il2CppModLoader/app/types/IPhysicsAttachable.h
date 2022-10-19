#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPhysicsAttachable {
        inline app::IPhysicsAttachable__Class** type_info = (app::IPhysicsAttachable__Class**)(modloader::win::memory::resolve_rva(0x047165B0));
        inline app::IPhysicsAttachable__Class* get_class() {
            return il2cpp::get_class<app::IPhysicsAttachable__Class>(type_info, "Moon", "IPhysicsAttachable");
        }
    } // namespace IPhysicsAttachable
} // namespace app::classes::types
