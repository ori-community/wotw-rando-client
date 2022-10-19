#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Internal_SubsystemInstances {
        inline app::Internal_SubsystemInstances__Class** type_info = (app::Internal_SubsystemInstances__Class**)(modloader::win::memory::resolve_rva(0x047022B0));
        inline app::Internal_SubsystemInstances__Class* get_class() {
            return il2cpp::get_class<app::Internal_SubsystemInstances__Class>(type_info, "UnityEngine.Experimental", "Internal_SubsystemInstances");
        }
        inline app::Internal_SubsystemInstances* create() {
            return il2cpp::create_object<app::Internal_SubsystemInstances>(get_class());
        }
    } // namespace Internal_SubsystemInstances
} // namespace app::classes::types
