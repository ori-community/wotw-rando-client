#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Internal_SubsystemInstances {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Internal_SubsystemInstances__Class** type_info;
        inline app::Internal_SubsystemInstances__Class* get_class() {
            return il2cpp::get_class<app::Internal_SubsystemInstances__Class>(type_info, "UnityEngine.Experimental", "Internal_SubsystemInstances");
        }
        inline app::Internal_SubsystemInstances* create() {
            return il2cpp::create_object<app::Internal_SubsystemInstances>(get_class());
        }
    } // namespace Internal_SubsystemInstances
} // namespace app::classes::types
