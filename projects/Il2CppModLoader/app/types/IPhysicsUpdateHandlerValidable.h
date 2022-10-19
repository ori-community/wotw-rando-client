#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPhysicsUpdateHandlerValidable {
        inline app::IPhysicsUpdateHandlerValidable__Class** type_info = (app::IPhysicsUpdateHandlerValidable__Class**)(modloader::win::memory::resolve_rva(0x04740498));
        inline app::IPhysicsUpdateHandlerValidable__Class* get_class() {
            return il2cpp::get_class<app::IPhysicsUpdateHandlerValidable__Class>(type_info, "Moon", "IPhysicsUpdateHandlerValidable");
        }
    } // namespace IPhysicsUpdateHandlerValidable
} // namespace app::classes::types
