#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPhysicsTriggerHandler {
        inline app::IPhysicsTriggerHandler__Class** type_info = (app::IPhysicsTriggerHandler__Class**)(modloader::win::memory::resolve_rva(0x0475DE68));
        inline app::IPhysicsTriggerHandler__Class* get_class() {
            return il2cpp::get_class<app::IPhysicsTriggerHandler__Class>(type_info, "", "IPhysicsTriggerHandler");
        }
    } // namespace IPhysicsTriggerHandler
} // namespace app::classes::types
